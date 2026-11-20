#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double n;
    double res = 0;
    double res2 = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        double x;
        cin >> x;
        res += x*x;
        res2 += x;
    }
    cout << ((1/(n-1)) * res) - ((1/(n*(n-1))) * (res2*res2)) << endl;
}