#include <iostream>
using namespace std;

#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n, x, s = 0, c = 0, m, pot;
    cin >> n;
    bool anna = true, bernard = false, primer = true;
    for (int i = 0 ; i<2*n ; ++i){
        if (anna){
            cin >> x;
            m = x;
            int k = 0;
            while(m>0){++k; m/=10;}
            pot = pow(10,(k/2));
            if (k%2==0 and pot!=1) {s = 2; i = 2*n;}
            else if (primer){c = (x/pot)%10; primer = false;}
            else {
                if ((x/pot)%10 != c) {s = 2; i = 2*n;}
            }
            anna = false;
            bernard = true;

        }
        else if (bernard){
            cin >> x;
            m = x;
            int k = 0;
            while(m>0){++k; m/=10;}
            pot = pow(10,(k/2));
            if (k%2==0 and pot!=1){s = 1; i = 2*n;}
            else if ((x/pot)%10 != c) {s = 1; i = 2*n;}
            anna = true;
            bernard = false;
        }
    }
    if (s == 1) cout << "A" << endl;
    else if (s == 2) cout << "B" << endl;
    else cout << "=" << endl;
}