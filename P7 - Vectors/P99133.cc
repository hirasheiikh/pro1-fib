#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> word(n);
    for (int i = 0; i < n; ++i) cin >> word[i];
    int m = word.size();
    for (int i = m - 1; i >= 0; --i){
        /*int tamany = word[i].size();
        for (int j = tamany - 1; j >= 0; --j) cout << word[i][j];
        */
       string paraula = word[i];
       int mida = paraula.size();
       for (int j = mida - 1; j >= 0; --j) cout << paraula[j];
       cout << endl;
    }
}
