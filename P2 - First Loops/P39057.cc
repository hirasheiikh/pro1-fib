#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i){
        string tipus;
        cin >> tipus;
        
        if (tipus == "rectangle") {
            double b,h;
            cin >> b >> h;
            cout << b*h << endl;
        
        }
        else {
            double r;
            cin >> r;
            cout << M_PI*r*r << endl;
        }
    }
    
}