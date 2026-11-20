#include <vector>
#include <iostream>

using namespace std;

typedef vector<int> row;
typedef vector<row> Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
    int n = a.size();
    Matrix s(n, row(n, 0));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int result = 0;
            
            for (int k = 0; k < n; ++k) {
                result += a[i][k] * b[k][j];
            }
            s[i][j] =  result;
        }
    }
    return s;
}