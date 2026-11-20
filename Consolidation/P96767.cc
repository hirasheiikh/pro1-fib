#include <iostream>
#include <string>
using namespace std;

int main(){
    cout.setf(ios:: fixed);
    cout.precision(4);
    double x,c;
    double res = 0;
    
    cin >> x;
    double pot = 1;
    while (cin >> c){
        res += c*pot; 
        pot *= x; 
    }
    cout << res << endl;
 }