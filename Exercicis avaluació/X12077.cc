#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, m; 
    while (cin >> n >> m) {
        vector<vector<char>> matriu(n, vector<char>(m));
        vector<vector<int>> nump (n, vector<int>(m, 0)); // nump compta el nombre de parÃ¨ntesis
        vector<vector<int>> numg (n, vector<int>(m, 0)); // numg compta el nombre de guions

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matriu[i][j];
            }
        }
        for (int i = n - 1; i > 0; --i) {
            for (int j = m - 1; j > 0; --j) {
                if (matriu[i][j] == ')') ++nump [i][j];
                if (i != n - 1 and j != m-1) nump [i][j] += nump [i][j + 1] + nump [i + 1][j] - nump [i + 1][j + 1];
                else if (j != m - 1) nump [i][j] += nump [i][j + 1];
                else if (i != n - 1) nump [i][j] += nump [i + 1][j];
                
            }
        }
        for (int i = n-1; i > 0; --i) {
            for (int j = m-1; j > 0; --j) {
                if (matriu[i][j] == '-' and i != n-1 and j != m-1) numg [i][j] += nump [i + 1][j + 1];
                numg [i - 1][j] += numg [i][j];
                numg [i - 1][j - 1] -= numg [i][j];
                numg [i][j - 1] += numg [i][j];

            }
        }
       
        int cont = 0;

        for (int i = 0; i < n-2; ++i) {
            for (int j = 0; j < m-2; ++j) {
                if (matriu[i][j] == ':') {
                    cont += numg [i + 1][j + 1];
                }
            }
        }
        cout << cont << endl;
    } 
}