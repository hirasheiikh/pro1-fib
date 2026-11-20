#include <iostream>
using namespace std;

// precondition: 0 < x < 10^9, input is a natural number.
//postcondition: print the fattened numver

int max_2(int a, int b){
    int max= a;
    if (b > a) max =b;
    
    return max;
}


int fatten (int x){
    int number = 0;
    if (x < 10) number = x;
    else number = fatten(x/10) * 10 + max_2(fatten(x/10)%10,x%10);
    
    return number;
    }

int main() {
    int n;
    
    while (cin >> n) {
        cout << fatten (n) << endl;
    }
}