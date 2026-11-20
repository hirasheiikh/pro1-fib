#include <iostream>
using namespace std;

int main() {
    int n,m;
    while (cin >> n >> m){
        int res = 0;
        cout << "suma dels cubs entre " << n << " i " << m << ": ";
        for (int i = n; i <= m; ++i){
            res += i*i*i;
        }
        cout << res << endl;
    }
}