#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 1;
    cin >> n;
    while (n%2 != 0){
        ++count;
        cin >> n;
    }
    cout << count << endl;
}