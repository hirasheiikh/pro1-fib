#include <iostream>
using namespace std;
int main(){
    int y;
    while (cin >> y){ // 238760   //37286 74572
        int par = 0;
        int senar = 0;
        int i = 1;
        int j = 1;
        while (y > 0){
            if ((y%10)%2 == 0 and y%10 != 0){
                par += y%10 * i; // 
                i *= 10;
                }
            if ((y%10)%2 != 0 and y%10 != 0){
                senar += y%10 *j;
                j *= 10;
                }
            y /= 10;
        }
        cout << (i*senar + par) << ' ' << (i*senar+ par) * 2 << endl;
    }

}