#include <iostream>
using namespace std;

int main(){
    string s;
    int count = 0;
    bool start = false;
    bool end = false;
    while (not end and cin >> s){
        if (s == "principi") start = true;
        else if (s == "final") end = true;
        else if (start) ++count;
    }
    if (start and end) cout << count << endl;
    else cout << "sequencia incorrecta" << endl;
}