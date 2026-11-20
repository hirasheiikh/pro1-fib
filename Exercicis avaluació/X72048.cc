#include <iostream>
using namespace std;

void paraules_recursives(int n){
    if (n == 0) cout << 0;
    else{
        for (int i = 0; i < n; ++i){
            cout << n;
            paraules_recursives(n - 1);
        }
        cout << n;
    }
}


int main(){
    int n;
    while(cin >> n){
        paraules_recursives(n);
        cout << endl;
    }

}


