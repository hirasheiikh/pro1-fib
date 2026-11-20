#include <iostream>
using namespace std;

int main(){
    string s,r,t;
    cin >> s >> r >> t;
    if ( s <= r and s <= t) cout << s << endl;
    else if (r <= s and r <= t) cout << r << endl;
    else cout << t << endl;
}