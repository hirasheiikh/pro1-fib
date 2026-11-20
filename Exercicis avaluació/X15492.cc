#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n){
        int y = n;
        int num = 0;
        int i = 1;
        if (n != 0){
            while (y > 0){
                int residu = y%10;
                if ((residu)%2 == 0) residu = (residu) + 1;
                num += residu * i;
                i *= 10;
                y /= 10;
            }
        }
        if (n == 0) num = 1;
        cout << num << endl;
    }



}
