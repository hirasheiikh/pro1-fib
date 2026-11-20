#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 2; i <= 16; ++i) { 
        cout << "Base " << i << ": ";
        int y = n; // 15
        int count = 0;
        while (y > 0){
            ++count;
            y/=i;
        }
        cout << count << " cifras." << endl;
    }

    
}