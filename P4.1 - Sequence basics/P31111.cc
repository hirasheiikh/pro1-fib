#include <iostream>
using namespace std;

int main(){
    char c;
    int count = 0;
    while (cin >> c and count >= 0){
        if (c == '(') ++count;
        else --count;
    }
    if (count == 0) cout << "si" << endl;
    else cout << "no" << endl;
}