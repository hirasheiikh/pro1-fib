#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int y = n;
    int res = 0;
    while (y > 0){
        res += y%10;
        y/=100;
    }
    cout << n;
    if (res%2 == 0) cout << " ES TXATXI" << endl;
    else cout << " NO ES TXATXI" << endl;
    
}