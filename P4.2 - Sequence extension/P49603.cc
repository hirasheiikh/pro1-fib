#include <iostream>
using namespace std;

int main(){
    int n;
    int count = 1;
    int last = 0;
    while (cin >> n){
        bool ordenat = true;
        string a,b;
        if (n > 0) cin >> a;
        for (int i = 1; i < n; ++i){
            cin >> b;
            if (a > b) ordenat = false;
            a = b;
        }
        if (ordenat) last = count;
        ++count;

    }
    if (last != 0) cout << "L'ultima linia ordenada creixentment es la " << last << '.' << endl;
    else cout << "No hi ha cap linia ordenada creixentment." << endl;

}