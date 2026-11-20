#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    //declaracio matriu
    typedef vector<int> Fila;  //cada fila té m columnes (int = num columnes)
    typedef vector<Fila> Matriz; //fem un vector de n files de m columnes

    Matriz matriu(n,Fila(m)); //matriu de n files i de m columnes
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) cin >> matriu[i][j];
    }
    string s;
    while (cin >> s){
        if (s == "fila"){
            int f;
            cin >> f;
            cout << "fila " << f << ':';
            for (int j = 0; j < m; ++j) cout << ' ' << matriu[f - 1][j];
            cout << endl;
        }
        else if (s == "columna"){
            int c;
            cin >> c;
            cout << "columna " << c << ':';
            for (int i = 0; i < n; ++i) cout << ' ' << matriu[i][c - 1];
            cout << endl;
        }
        else if (s == "element"){
            int f, c;
            cin >> f >> c;
            cout << "element " << f << ' ' << c << ':';
            cout << ' ' << matriu[f - 1][c - 1];
            cout << endl;
        }
    }

}