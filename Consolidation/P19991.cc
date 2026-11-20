#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){ 
            char c;
            cin >> c;
            if (i == j) res += c - '0';
            else if (j == n - i - 1) res += c - '0';
        }
    }
    cout << res << endl;
}
   