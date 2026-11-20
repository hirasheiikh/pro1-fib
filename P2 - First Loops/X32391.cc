#include <iostream>
using namespace std;

int main() {
    int d,n,t;
    int count = 0;
    
    cin >> d >> n >> t;
    for (int i = 0; i < t; ++i){
        int a;
        cin >> a;
        if (n + a - d> 0) ++count;
        n = n + a - d;
    }
    cout << count  << endl;
}
    