#include <iostream>
#include <vector>
using namespace std;

int main(){
   int f, c;

   while(cin >> f >> c){
    vector<vector<char>>matriu(f, vector<char>(c));
    
    for (int i = 0; i < f; i++){
        for (int j = 0; j < c; j++) cin >> matriu[i][j];
    }
    int count = 0;
    for (int i = 0; i < f; i++){
        for (int j = 0; j < c; j++){
            if (matriu[i][j] == ':' and j < c - 2){
                if (matriu[i][j + 1] == '-' and j < c - 1){
                    if (matriu[i][j + 2] == ')') ++count;
                }
            }
            else if (matriu[i][j] == '(' and j < c - 2){
                if (matriu[i][j + 1] == '-' and j < c - 1){
                    if (matriu[i][j + 2] == ':') ++count;
                }
            }
            else if (matriu[i][j] == '"' and i < f - 2){
                if (matriu[i + 1][j] == '|' and i < f - 1){
                    if (matriu[i + 2][j] == 'v') ++count;
                }
            }
            else if (matriu[i][j] == '^' and i < f - 2){
                if (matriu[i + 1][j] == '|' and i < f - 1){
                    if (matriu[i + 2][j] == '"') ++count;
                }
            }
        }
    }
    cout << count << endl;
   }
}