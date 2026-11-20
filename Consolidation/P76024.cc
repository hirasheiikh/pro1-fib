#include <iostream>
using namespace std;

int main(){
    cout.setf(ios:: fixed);
    cout.precision(4);
    double a,k;
    int b;
    
    while (cin >> a >> b >> k){
        double res = 0;
        int i = 0;
        while ((a + i*k) <= b){
            res += 1/(a + i*k);
            ++i;
        }
        cout << res << endl;
    }
    
}
