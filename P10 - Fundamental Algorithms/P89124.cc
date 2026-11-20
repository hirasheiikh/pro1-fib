#include <iostream>
#include <vector>
using namespace std;

int main() {
	double n_max = 1000000;
	vector<bool> v(n_max+1, true);
	v[0] = false;
	if (n_max > 0) v[1] = false;
	for (int i = 2; i*i <= n_max; ++i) {
		if (v[i]) {
			for (int j = 2; (i)*j <= n_max; ++j) {
				v[(i)*j] = false;
			}
		}
	}
	int n;
	while (cin >> n) {
		if (v[n]) cout << n << " es primer" << endl;
		else cout << n << " no es primer" << endl;
	}
}