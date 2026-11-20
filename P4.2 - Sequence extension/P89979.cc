#include <iostream>
using namespace std;

int main(){
    int n;
    bool ordenat = false;
    int pos = 1;
    while (cin >> n and not ordenat){
        string x;
        cin >> x;
        bool mistake = false;
        for (int i = 1; i < n; ++i){
            string y;
            cin >> y;
            if (x > y) mistake = true;
            x = y;
        }
        if (not mistake) ordenat = true;
        else ++pos;
    }
    if (ordenat) cout << "La primera linia ordenada creixentment es la " << pos << '.' << endl;
    else cout << "No hi ha cap linia ordenada creixentment." << endl; 
}   