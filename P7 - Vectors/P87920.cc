#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; ++i){
            cin >> v[i];
            sum += v[i];
        }
        bool equal = false;
        int i = 0;
        while (i < n and not equal){
            if (sum - v[i] == v[i]) equal = true;
            ++i;
        }
    if (equal) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
}

