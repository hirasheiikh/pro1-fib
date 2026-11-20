#include <iostream>
using namespace std;

int main(){
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if ((n1 + n2)/2 == n3 or (n2 + n3)/2 == n1 or (n1 + n3)/2 == n2) cout << "YES" << endl;
    else cout << "NO" << endl;
} 
