#include <iostream>
using namespace std;

int main() {
    int n;
    
    while (cin >> n){
        if (n < 0) {
            cout << ':';
            int y = n * -1;
            while (y != 0){
                if (y%3 == 1) cout << '+';
                if (y%3 == 0) cout << '-';
                if (y%3 == 2) cout << '*';
                y /= 3;
            }
        }
        else if (n == 0) cout << '-';
        else {
            while (n != 0){
                if (n%3 == 1) cout << '+';
                if (n%3 == 0) cout << '-';
                if (n%3 == 2) cout << '*';
                n /= 3;
            }
        }
        cout << endl;
    }
}
