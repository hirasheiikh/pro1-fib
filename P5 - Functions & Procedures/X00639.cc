#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2){
    if (n1/double(d1) < n2/double (d2)) return true;
    else return false;
}

int main(){
    int n1,d1,n2,d2;
    cin >> n1 >> d1 >> n2 >> d2;
    cout << c_frac(n1,d1,n2,d2) << endl;

}