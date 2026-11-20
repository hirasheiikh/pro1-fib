#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char d;
    int count_a = 0;
    int count_b = 0;
    int count_c = 0;

    for (int i = 0; i < n; ++i) {
        cin >> d;
        if (d == 'a') ++count_a;
        else if (d == 'b') ++count_b;
        else ++count_c;
    }
    cout << "majoria de ";
    if (count_a >= count_b and count_a >= count_c) cout << 'a' << endl << count_a;
    else if (count_b > count_a and count_b >= count_c) cout << 'b' << endl << count_b;
    else cout << 'c' << endl << count_c;

    cout << " repeticio(ns)" << endl;

}