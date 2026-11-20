#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    else {
        int i = 2;
        while (n%i != 0 and i*i <= n) ++i;
        if (i*i > n) return true;
        else return false;
    }
}

int next_prime(int n) {
    int n2 = ++n;
    while (not is_prime(n2)) {
        ++n2;
    }
    return n2;
}

int main() {
    int n;
    cin >> n;

    while (is_prime(n)) {
	cout << next_prime(n) << endl;
	cin >> n;
    }
}