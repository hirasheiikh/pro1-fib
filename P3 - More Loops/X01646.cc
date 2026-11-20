#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    while (cin >> x){
        int sum = 0;
        int y = x;
        while (y > 0){
            sum += y%n;
            y/=n;
        }
    cout << x << ": " << sum << endl;
    }
    
}
