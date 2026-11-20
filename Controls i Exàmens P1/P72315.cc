#include <iostream>
using namespace std;

//PRE: X, y son dos naturales y tienen el mismo numero de digitos
//POST: retorna la interalació de x i y

int intercalacio(int x, int y) {
    if(x < 10) return x*10 + y;
    else {
        int num = intercalacio (x/10, y/10);
        return num*100 + x%10*10 + y%10;
    }
}


int main() {
    int x, y;
    while (cin >> x >> y) {
        cout << intercalacio(x,y) << endl;
    }
}