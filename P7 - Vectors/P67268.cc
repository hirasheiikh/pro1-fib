#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int m =  v.size();
        for (int i = m - 1; i >= 0; --i){
            if (i < m - 1) cout << ' ';
            cout << v[i];

        }
        cout << endl;
    }
}