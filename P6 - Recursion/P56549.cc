#include <iostream>
using namespace std;

void canvi_binari(int n){ // 9
    if (n < 2) cout << n;
    else {
        canvi_binari(n/2);
        cout << n%2;
    }
}

void canvi_octal(int n){ // 9
    if (n < 8) cout << n;
    else {
        canvi_octal(n/8);
        cout << n%8;
    }
}

void canvi_hexa(int n){ // 9
    if (n < 10) cout << n;
    else if (n == 10) cout << 'A';
    else if (n == 11) cout << 'B';
    else if (n == 12) cout << 'C';
    else if (n == 13) cout << 'D';
    else if (n == 14) cout << 'E';
    else if (n == 15) cout << 'F';
    else {
        canvi_hexa(n/16);
        n = n%16;
        if (n < 10) cout << n;
        else if (n == 10) cout << 'A';
        else if (n == 11) cout << 'B';
        else if (n == 12) cout << 'C';
        else if (n == 13) cout << 'D';
        else if (n == 14) cout << 'E';
        else if (n == 15) cout << 'F';

    }
}

int main(){
    int n;
    while (cin >> n){
        cout << n << " = ";
        canvi_binari(n);
        cout << ", ";
        canvi_octal(n);
        cout << ", ";
        canvi_hexa(n);
        cout << endl;
    }
}
