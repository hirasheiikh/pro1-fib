#include <iostream>
using namespace std;

int suma_digits(int n){
    if (n < 10) return n;
    else return n%10 + suma_digits(n/10);

}

int reduccio_digits(int n){
    while (n >= 10) {
        n = suma_digits(n);
    }
    return n;



}





int main(){
    int n;
    while (cin >> n) {
        cout << reduccio_digits(n) << endl;
    }
    return 0;
}
