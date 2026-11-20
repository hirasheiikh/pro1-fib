#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int y;
    int sumpar = 0;
    int sumsenar = 0;
    
    cin >> n;
    if (n > 9){
        y = n;
        while (y > 0){
            sumsenar += y%10;
            sumpar += (y/10)%10;
            y = y/100;
            }
        cout << sumsenar << ' ' << sumpar << endl;
        if (sumsenar%sumpar == 0) cout << sumsenar << " = " << sumsenar/sumpar << " * " << sumpar << endl;
        else if (sumpar%sumsenar == 0) cout << sumpar << " = " << sumpar/sumsenar << " * " << sumsenar << endl;
        else cout  << "res" << endl;
    }
    else if (n < 10) {
        sumsenar = n;
        sumpar = 0;
        cout << sumsenar << ' ' << sumpar << endl;
        cout << 0 << " = " << 0 << " * " << sumsenar << endl;
    }
    
    
}
