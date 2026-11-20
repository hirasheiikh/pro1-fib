#include <iostream>
using namespace std;


int suma_digits(int n){
    if (n < 10) return n;
    else return n%10 + suma_digits(n/10);

}

bool primer(int n) {
    if (n <= 1) return false;
    else {
        int i = 2;
        while (n%i != 0 and i*i <= n) ++i;
        if (i*i > n) return true;
        else return false;
    }
}


bool es_primer_perfecte(int n){
    if (n < 10) return primer(n);
    if (primer(n)) return es_primer_perfecte(suma_digits(n));
    else return false;

}


int main() {
    int n;
    while (cin >> n) cout << (es_primer_perfecte(n) ? "true" : "false") << endl;
}
