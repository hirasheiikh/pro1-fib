#include <iostream>
using namespace std;

int expression() {
    char element;
    cin >> element;
    
    int result = 0;
    
    if (element >= '0' and element <= '9') result = element - '0';
    
    else {
        if (element == '+') result = expression() + expression();
        else if (element == '*') result = expression() * expression();
        else if (element == '-') result = expression() - expression();
        }
    return result;
}

int main(){
    cout << expression () << endl;
}