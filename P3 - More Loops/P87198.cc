#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n){

        for (int i = 0; i < n - 1; ++i){
            for (int l = i; l < n - 1; ++l) cout << ' ';
            for (int j = 0; j < n + 2*i; ++j) cout << 'X';
            cout << endl;
        }
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n + 2*(n-1); ++j) cout << 'X';
            cout << endl;
        }

        for (int i = n - 2; i >= 0; --i){
            for (int l = 0; l < (n - 1) - i; ++l) cout << ' ';
            for (int j = 0; j < n + (2*i); ++j) cout << 'X';
            cout << endl;
        }
        cout << endl;
    }
}


