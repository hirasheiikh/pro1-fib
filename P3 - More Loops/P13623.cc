#include <iostream>
using namespace std;

int main() {
    int f, c;
    cin >> f >> c;
    int count = 0;
    for (int i = 0; i < f; ++i){
        for (int j = 0; j < c; ++j){
            char m;
            cin >> m;
            if (i%2 == 0 and j%2 == 0) count += m - '0';
            else if (i%2 != 0 and j%2 != 0) count += m - '0';
            }
        }
        cout << count << endl;
    }
