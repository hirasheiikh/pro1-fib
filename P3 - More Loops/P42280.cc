#include <iostream>
using namespace std;

int main() {
    int f, c;
    int sum = 0;
    char m;
    cin >> f >> c;
    for (int i = 0; i < f; ++i){
        for (int j = 0; j < c; ++j){
            cin >> m;
            sum += m - '0';
        }
    }
    cout << sum << endl;
}