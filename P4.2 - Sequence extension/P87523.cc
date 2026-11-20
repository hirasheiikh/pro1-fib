#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    bool hola = false;
    while (c!='.'){
        if (c == 'h'){
            cin >> c;
            if (c == 'o'){
                cin >> c;
                if (c == 'l'){
                    cin >> c;
                    if (c == 'a'){
                        hola = true;
                    }
                }
            }
        }
        else cin >> c;
    }
    if (hola) cout << "hola" << endl;
    else cout << "adeu" << endl;

}