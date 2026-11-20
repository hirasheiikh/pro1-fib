#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu; //una altra manera de declarar una matriu (si és quadrada)
void transposa(Matriu& M){
    int n = M.size();
    Matriu aux = M;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j) M[j][i] = aux[i][j];
    }
}



int main(){
    int n;
    while (cin >> n) {
        vector<vector<int>> M(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> M[i][j];
            }
        }
        transposa(M);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
