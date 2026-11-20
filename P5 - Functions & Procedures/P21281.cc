#include <iostream>
using namespace std;

void factor(int n, int& f, int& q){
    f = n;
    q = 1;
    for (int i = 2; i*i <=n; ++i){
            int count = 0;
            while (n%i == 0) {
                n = n/i;
                ++count;
            }
            if (count > q or (i < f and count == q)){
                q = count;
                f = i;
            }
        }
    }
    

int main (){
    int n, f, q;
    cin >> n;
    
    factor (n,f,q);
    cout << f << ' ' << q << endl;
}