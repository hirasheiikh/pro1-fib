#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    
    cout << "El nombre de digits de " << n << " es ";
    
    if (n == 0) cout  << 1 << '.' << endl;
    
    else {
        int i = n;
        while (i > 0){
            i/=10;
            ++count;
        }
        cout << count << '.' << endl;
    }
        

    
}