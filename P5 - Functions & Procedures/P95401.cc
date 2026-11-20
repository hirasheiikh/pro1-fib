#include <iostream>
using namespace std;

bool es_any_de_traspas(int n){
    return ((n%100 == 0 and n%4 == 0 and n/100%4 == 0) or (n%100 != 0 and n%4 == 0));
}

int main() {
    int n;
    cin >> n;
    cout << es_any_de_traspas(n) << endl;
}