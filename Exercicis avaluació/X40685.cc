#include <iostream>
using namespace std;

int main(){
    bool operacio = false;
    int n1,n2,n3;
    string comparador;
    char operador;

    while (cin >> n1 >> operador >> n2 >> comparador >> n3){
        int res = 0;
        if (operador =='+') res = n1 + n2;
        else if (operador == '-') res = n1 - n2;
        else res = n1 * n2;

        if (comparador == "<"){
            if (res < n3) operacio = true;
            else operacio = false;
        }
        else if (comparador == ">"){
            if (res > n3) operacio = true;
            else operacio = false;
        }
        else if (comparador == "<="){
            if (res <= n3) operacio = true;
            else operacio = false;
        }
        else if (comparador == ">="){
            if (res >= n3) operacio = true;
            else operacio = false;
        }
        else if (comparador == "=="){
            if (res == n3) operacio = true;
            else operacio = false;
        }
        else {
            if (res != n3) operacio = true;
            else operacio = false;
        }
        if (operacio) cout << "true" << endl;
        else cout << "false" << endl;
    }
}