#include <iostream>
#include <vector>
using namespace std;
//diagonales crecientes
typedef vector<int> Row;
typedef vector<Row> Matrix;

void complete_matrix(Matrix& matrix) {
   int row = matrix.size();
   int columns = matrix[0].size();
   for (int i = 0; i < row; ++i){
      for (int j = 0; j < columns; ++j) cin >> matrix[i][j];
   }
}

void read(const Matrix& matrix) {
   int row = matrix.size();
   int columns = matrix[0].size();
   for (int i = 0; i < row; ++i){
      cout << matrix[i][0];
      for (int j = 1; j < columns; ++j) cout << ' ' << matrix[i][j];
      cout << endl;
   }
}

bool expanding(const Matrix& matrix, int i, int j, string diagonal) {
    int w = matrix[0].size();
    int l = matrix.size();
    if (diagonal == "nn") {
       if (i == l - 1 or j == 0) return true;
       if (matrix[i + 1][j - 1] <= matrix[i][j]) return false;
       return expanding(matrix, i + 1, j - 1, diagonal);
    }
    else if (diagonal == "np") {
       if (i == l - 1 or j == w -1) return true;
       if (matrix[i + 1][j + 1] <= matrix[i][j]) return false;
       return expanding(matrix, i + 1, j + 1, diagonal);
    }
    else if (diagonal == "pn") {
       if (i == 0 or j == 0) return true;
       if (matrix[i - 1][j - 1] <= matrix[i][j]) return false;
       return expanding(matrix, i - 1, j - 1, diagonal);
    }
    else if (diagonal == "pp") {
       if (i == 0 or j == w - 1) return true;
       if (matrix[i - 1][j + 1] <= matrix[i][j]) return false;
       return expanding(matrix, i - 1, j + 1, diagonal);

    }
    else {
        bool e = expanding(matrix, i, j, "nn") and expanding(matrix, i, j, "pp");
        bool d = expanding(matrix, i, j,"np") and expanding(matrix, i, j, "pn");
        return e and d;
    }
}

int main() {
   int a, b;
   while (cin >> a >> b) {
       Matrix result(a,Row(b));
       complete_matrix(result);
       int i, j;
       cin >> i >> j;
       if(expanding(result, i, j, "t")) cout << "yes";
       else cout << "no";
       cout << endl;
   }
}
