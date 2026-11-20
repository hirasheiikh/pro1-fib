#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x){
        cout << "La suma dels digits de " << x << " es ";
        int y = x;
        int res = 0;
        while (y > 0){
            res += y%10;
            y /= 10;
            
        }
        cout << res << '.' << endl;
    }
}