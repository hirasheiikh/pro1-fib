#include<iostream>
#include<vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Matriu;
typedef vector<int> Fila2;
typedef vector<Fila2> Matriu2;

int main(){
    int f, c;
    while (cin >> f >> c){
        Matriu u(f, Fila(c));
    
        for (int i = 0; i < f; ++i){
            for (int j = 0; j < c; ++j) cin >> u[i][j];
        }

        vector<int> count(10, 0);
        vector<int> n1(10);
        vector<int> n2(10);
        Matriu2 v(f, Fila2(c));

        for (int i = 0; i < f; ++i){
            for (int j = 0; j < c; ++j) ++n1[u[i][j] - '0'];
            for (int k = 0; k < c; ++k) v[i][k] += n1[u[i][k] - '0'];
            n1 = count;

        }
        for (int j = 0; j < c; ++j){
            for (int i = 0; i < f; ++i) ++n2[u[i][j]- '0'];
            for (int k = 0; k < f; ++k) v[k][j] += n2[u[k][j] - '0'];
            n2 = count;
        }
        
        for (int i = 0; i < f; ++i){
            for (int j = 0; j < c; ++j) cout << v[i][j]%10;
            cout << endl;
        }
        cout << endl;
    }
}