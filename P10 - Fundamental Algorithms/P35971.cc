#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

int suma_linia(const Matriu& mat, int of, int oc, int df, int dc) {
	int suma = 0;
		if (of == df) {
			if (oc < dc) {
				for (int i = oc+1; i <= dc; ++i) suma += mat[df][i];
		}
		else if (oc > dc) {
			for (int i = dc; i < oc; ++i) suma += mat[df][i];
		}
	}
	else if (oc == dc) {
		if (of < df) {
			for (int i = of+1; i <= df; ++i) suma += mat[i][dc];
	}
	else if (of > df) {
			for (int i = df; i < of; ++i) suma += mat[i][dc];
		}
	}
	return suma;
}

int main() {
	int f, c;
	cin >> f >> c;
	Matriu mat(f, vector<int>(c));
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> mat[i][j];
		}
	}
	int of, oc, df, dc;
	cin >> df >> dc;
	of = df;
	oc = dc;
	int suma = mat[of][oc];
	while (cin >> df >> dc) {
		suma += suma_linia(mat, of, oc, df, dc);
		of = df;
		oc = dc;
	}
	cout << "suma = " << suma << endl;
	}