#include <iostream>
#include <string>
using namespace std;


bool es_palindrom(const string& s){
    int size = s.size();
    int pos = size/2;
    bool palindrom = true;

    int i = 0;
    while (palindrom and i < pos){
        if (s[i] != s[size - 1 - i]) palindrom = false;
        ++i;
    }
    return palindrom;
}


int main() {
    string s;
    while (cin >> s) {
      cout << es_palindrom(s) << endl;
      int n = s.size();
      if (n > 100) {
        char c = s[0];
        s[0] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[0] = c;

        c = s[1];
        s[1] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[1] = c;

        c = s[3];
        s[3] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[3] = c;

        c = s[n-1];
        s[n-1] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[n-1] = c;

        c = s[n-2];
        s[n-2] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[n-2] = c;

        c = s[n-7];
        s[n-7] = 'a';
        for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
        s[n-7] = c;
      }
    }
    return 0;
}
