#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    
    double n,m;
    
    while (cin >> n >> m){
        double res = 0;
        for (double i = m + 1; i <= n; ++i){
            res += 1/i;
        }
        cout << res << endl;
    }
    
    
}