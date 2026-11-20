#include <iostream>
using namespace std;

int main() {
    char c,d;
    cin >> c >> d;

    if (c == 'A') {
        if (d == 'V') cout << 2 << endl;
        else if (d == 'P') cout << 1 << endl;
        else cout << '-' << endl; 
    }
    else if (c == 'V') {
        if (d == 'V') cout << '-' << endl;
        else if (d == 'P') cout << 2 << endl;
        else cout << 1 << endl;
    }
    else { //P
        if (d == 'V') cout << 1 << endl;
        else if (d == 'P') cout << '-' << endl;
        else cout << 2 << endl;
    }

}