#include <iostream>
using namespace std;

void print(int n, int buit) {
    if (n == 1) {
        for (int i = 0; i < buit - n; ++i) cout << ' ';
        for (int i = 0; i < 2*n - 1; ++i) cout << '*';
        cout << endl;
    }

    else {
        print(n - 1, buit);
        int x = 2;
        int mod = 1; //fem servir mod per modificar x a cada iteracio
        for (int i = 0; i < n*2 - 3; ++i) {
            for (int j = 0; j < buit - x; ++j) cout << ' ';
            for (int j = 0; j < 2*x - 1; ++j) cout << '*';
            cout << endl;
            if (mod == 1 and x == n) mod = -1;
            else if (mod == -1 and x == 2) mod = 1;
            x += mod;
        }
        print(n - 1, buit);
    }
}

int main() {
    int n;
    while (cin >> n) {
        print(n, n);
        cout << endl;
    }
}