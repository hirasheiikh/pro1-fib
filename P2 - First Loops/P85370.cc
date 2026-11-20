#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double c, i, x, f;
    int t = 0;
    string type;
    
    cin >> c >> i >> t >> type;
    
    if (type == "simple"){
        i = i/100;
        f = (c * i * t + c);
        
        cout << f << endl;
    }
    else {
        for (x = 0; x < t; ++x) {
            c +=c*i/100;
        }
        cout << c << endl;
    }
}