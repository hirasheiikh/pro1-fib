#include <iostream>
using namespace std;

int main(){
    bool trobat = false;
    char c;
    while (not trobat and cin >> c){
        if (c == 'a') trobat = true;
    }

    if (trobat) cout << "si" << endl;
    else cout << "no" << endl;
}