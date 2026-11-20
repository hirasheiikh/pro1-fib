#include <iostream>
using namespace std;

void cross(int n, char c){
    
    // x in the middle (if n = 5 ' '' ' X ' '' ')
    for (int i = 0; i < n/2; ++i){
        for (int j = 0; j < n/2; ++j) cout << ' ';
        cout << c << endl;
    }
    
    for (int k = 0; k < n; ++k) cout << c; 
    cout << endl;
    
    for (int i = 0; i < n/2; ++i){
        for (int j = 0; j < n/2; ++j) cout << ' ';
        cout << c << endl;
    }
    
}

int main(){
    int n;
    char c;
    cin >> n >> c;
    
    cross(n,c);
}