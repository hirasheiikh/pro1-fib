#include <iostream>
using namespace std; 
int main() {
    int numspaces, numrombes;
    while (cin >> numspaces >> numrombes){
        for (int k = 0; k < numrombes; ++k){
            for (int i = 0; i <= numspaces; ++i){
                for (int j = 0; j < numspaces*2 + 1; ++j){
                    if (j == numspaces - i or j == numspaces + i) cout << '*';
                    else if (j < numspaces + i) cout << ' ';
                }
                cout << endl;
            }
            for (int i = numspaces - 1; i > 0; --i){
                for (int j = 0; j < numspaces*2 + 1; ++j){
                    if (j == numspaces - i or j == numspaces + i) cout << '*';
                    else if (j < numspaces + i) cout << ' ';
                }
                cout << endl;
            }
        }
        for (int i = 0; i < numspaces; ++i) cout << ' ';
        cout << '*' << endl;
        cout << endl;
        }
}