#include <iostream>
using namespace std;

char encoded(char c, int k){
    if(c == '_') return (' ');
    
    else{
        if (c >= 'a' and c <= 'z') c = (c + k - 'a')%26 + 'A';
        }
        return(c);
}
int main(){
    char c;
    int k;
    while (cin >> k) {
        cin >> c;
        while (c != '.'){
            cout << encoded(c,k);
            cin >> c;
        }
        cout << endl;
    }
}
