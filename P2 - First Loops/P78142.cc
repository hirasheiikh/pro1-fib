#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    double n;
    double res = 0;
    double count = 0;
    
    while (cin >> n) {
        res+=n;
        ++count;
    }
    cout << res/count << endl;
    
}
    