#include <iostream>
using namespace std;

int main(){
    int n, x;
    int i = 0;
    cin >> n;
    while (i < n){
        cin >> x;
        ++i;
    }
      cout << "A la posicio " << n << " hi ha un " << x << '.' << endl;
}