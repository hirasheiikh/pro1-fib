#include <iostream>
using namespace std;

int main() {
    int n, m;
    bool printEndl = false;
    while (cin >> n >> m){
        if (printEndl) cout << endl;
        int x = 0;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cout << 9 - x%10;
                ++x;
            }
            cout << endl;
        }
        printEndl = true;
    }
}