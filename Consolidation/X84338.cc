#include <iostream>
using namespace std;

int main() {
    int x;
    int count = 0;
    cin >> x; //78
    int y = x;
    
    
    
    while (y != 0){
        ++count; //2
        y/=10; 
    }
    if (count%2 == 0 and x != 0){
        int res = 0;
        int res2 = 0;
        
        for (int i = 0; i < (count/2); ++i){
            res += x%10; // 0 + 8 = 8
            x/=10; // 7
        }
            
        for (int j = 0; j < count/2; ++j) {
            res2 += x%10; // 0 + 7 = 7
            x/=10; // 0
        }
    
    if (res < res2) cout << res2 << " > " << res << endl;
    else if (res > res2) cout << res2 << " < " << res << endl;
    else if (res == res2) cout << res << " = " << res2 << endl;
    
    }
    else cout << "res" << endl;
}


