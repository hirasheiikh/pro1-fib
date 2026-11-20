#include <iostream>
using namespace std;

int main() {
    char c;
    int count = 0;
    cin >> c;
    if (c == 'a') ++count;
    while (c != '.'){
        cin >> c;
        if (c == 'a') ++count;
    }
    cout << count << endl;
}
    
    