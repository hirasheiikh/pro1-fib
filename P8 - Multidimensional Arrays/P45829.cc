#include <vector>
#include <iostream>

using namespace std;

typedef vector <int>Row;
typedef vector <Row>Matrix;

void erase(vector <vector <int> >&v, int x, int y, int& count) {
    int row = v.size();
    int column = v[0].size();
    int i = x;
    bool full = false;
    while (i < row and v[i][y] != 0) {
		int j = y;
		while (j < column and v[i][j] != 0) {
			v[i][j] = 0;
			full = true;
			++j;
		}
		++i;
	}
	if (full) ++count;
}

int main() {
	int r, c;
	while (cin >> r >> c) {
		Matrix M(r, Row(c));
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				cin >> M[i][j];
			}
		}
		int count = 0;
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				if (M[i][j] != 0) {
					erase(M, i, j, count);
				}
			}
		}
		cout << count << endl;
	}
}