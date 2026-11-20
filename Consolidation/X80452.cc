#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int p = n/7;
        int q = 0;
        bool found = false;
        while (not found){
            q = (n - 7 *p)/4;
            if (7*p + 4*q == n) found = true;
            else {
                --p;
                if (p == 0) ++q;
            }
        }
        cout << p << ' ' << q << endl;
    }
}