#include <iostream>
using namespace std;

int main(){
    int n, m;
    int count = 0;
    cin >> n;
    cout << "nombres que acaben igual que " << n << ':' << endl;
    while (cin >> m){
        if (m%1000 == n%1000){
            cout << m << endl;
            ++count;
        }
    }
    cout << "total: " << count << endl;
}