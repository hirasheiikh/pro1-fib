#include <vector>
#include <iostream>

using namespace std;

typedef vector < vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b){
    Matrix Result(a.size(), vector<int>(b[0].size()));
    for (int i = 0; i < Result.size(); ++i){
        for(int j = 0; j < Result[0].size(); ++j){
            for(int k = 0; k < a[0].size(); ++k){
                Result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return Result;
}
int main() {
    int f1, c1, f2, c2;
    
    cin >> f1 >> c1;
    Matrix Mat1(f1, vector <int>(c1));
    for(int i = 0; i < f1; ++i) {
        for (int j = 0; j < c1; ++j) cin >> Mat1[i][j];
    }
    
    cin >> f2 >> c2;
    Matrix Mat2(f2, vector <int>(c2));
    for(int i = 0; i < f1; ++i) {
        for (int j = 0; j < c2; ++j) cin >> Mat2[i][j];
    }
   
    Matrix Result = product(Mat1, Mat2);
    for(int i = 0; i < Result.size(); ++i) {
        for (int j = 0; j < Result[0].size(); ++j) cin >> Result[i][j];
    }
}