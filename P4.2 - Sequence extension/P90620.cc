#include <iostream>
using namespace std;

int main() {
    int prev;
    cin >> prev;
    bool trobat = false;
    int act;
    while (cin >> act and act != 0 and not trobat){
        if (act > prev and act > 3143){
            int post;
            cin >> post;
            if (post < act and post != 0) trobat = true;
            else trobat = false;
            }
        else trobat = false;
        prev = act;
    }
        if (trobat) cout << "SI" << endl;
        else cout << "NO" << endl;
    }