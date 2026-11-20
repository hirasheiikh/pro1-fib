#include <iostream>
#include <cmath>
using namespace std;

double sin_func(double a){
    a = a * (M_PI/180);
    return sin(a);
}

double cos_func(double a){
    a = a * (M_PI/180); 
    return cos(a);
}

int main(){
    cout.setf(ios::fixed);
    cout.precision(6);
    double a;
    while (cin >> a){
        cout << sin_func(a) << ' ' << cos_func(a) << endl;
    }
}