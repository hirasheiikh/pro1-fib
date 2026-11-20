#include <iostream>
using namespace std;

int main() {
    int n, x;
    int i = 1;
    cin >> n;
    bool found = false;
    while (not found and cin >> x){
        if (n == i) found = true;
        else ++i;
    }
    if (found) cout << "A la posicio " << n << " hi ha un " << x << '.' << endl;
    else cout << "Posicio incorrecta." << endl;

}
