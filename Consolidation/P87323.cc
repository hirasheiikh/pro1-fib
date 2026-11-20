#include <iostream>
using namespace std;

int main() {
    int f,c;
    cin >> f >> c;
    for(int i = 0; i < f; ++i) {
        int x = i;
        x *= -1;
        
        for (int j = 0; j < c; ++j) {
            if (x < 0) cout << (x*-1)%10;
            else cout << x%10;
            ++x;
        }
        cout << endl;
    }
    
    /* for (int i = 0; i  f; ++i) {
        for (int j = 0 + i; j + i > c*-1; --j) {
            if (j < 0) cout << (j*-1)% 10;
            else cout << j%10;
        }
    }
    */
}