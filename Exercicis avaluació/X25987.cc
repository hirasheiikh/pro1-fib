#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n){ // 121
        int count = 0;
        while (n > 100){ //121
            if ((n/10)%10 > n%10 and ((n/100)%10 < (n/10)%10)) ++count;
            n/=10;
        }
        cout << count << endl;
    }
    

}