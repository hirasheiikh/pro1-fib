#include <iostream>
#include <vector>

using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Matriuchars;

typedef vector<int> Filanum;
typedef vector<Filanum> Matriunum;

int main(){
    int f,c;
    while(cin >> f >> c){
        int result = 0;
        Matriuchars m(f, Fila(c));
        Matriunum n(f, Filanum(c,1));
        for (int i = 0; i < f; i++){
            for (int j = 0; j < c; j++){
                cin >> m[i][j];
                if (i > 0 and j > 0){
                    if (m[i][j] == m[i - 1][j] and m[i][j] == m[i][j - 1] and m[i][j] == m[i - 1][j - 1]){ 
                        n[i][j] = 1 + min(n[i - 1][j], min((n[i][j - 1]),(n[i - 1][j - 1])));
                    }
                }
                result += n[i][j];
            }
        }
        cout << result << endl;
    }
}