#include <iostream>
using namespace std;

int main(){
  int x;
    cin >> x;

    int i = 0;
    while (i < x){
        ++i;
        
        int y;
        cin >> y;
        bool prime = (y != 0 and y != 1);
        int k = 2;
        while (prime and k*k <= y){
            if (y%k == 0) prime = false;
            ++k;
        }
        
        cout << y;
        if (prime) cout << " is prime" << endl;
        else cout << " is not prime" << endl;
    }
}