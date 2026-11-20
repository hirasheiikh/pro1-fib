#include <iostream>
#include <vector>
using namespace std;

// PRE: |v|≥ 3
// POST: retorna un vector amb l’alçada de tots els cims de v (en el mateix ordre)

/* vector<int> calcula_cims(const vector<int>& v){
    int size = v.size();
    vector<int> w;
    for (int i = 0; i < size - 1; ++i){
        if (v[i] > v[i - 1] and v[i] > v[i + 1]) w.push_back(v[i]);
    }
    return w;
}
*/
vector<int> calcula_cims(const vector<int>& v) {
        int tam_v = v.size();
        int tam_sol;
        if (tam_v%2 == 0) tam_sol = tam_v/2 - 1;
        else tam_sol = tam_v/2;
        vector<int> u(tam_sol, 0);
        int k = 0;
        for (int i = 1; i < tam_v-1; ++i) {
                if (v[i] > v[i-1] and v[i] > v[i+1]) {
                        u[k] = v[i];
                        ++k;
                }
        }
        return u;      
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    int count = 0;
    vector<int> m = calcula_cims(v);
    for (int i = 0; m[i] != 0; ++i) ++count;
    
    int ultim_cim;
    cout << count << ":";
    for (int i = 0; m[i] != 0; ++i){
        cout << " " << m[i];
        ultim_cim = m[i];
    }
    cout << endl;
    bool mes_alt = false;
    bool primer = true;
    for (int i = 0; m[i] != 0; ++i){
        if (m[i] > ultim_cim){
            if (primer) primer = false;
            else cout << " ";
            cout << m[i];
            mes_alt = true;
            }
    }
    if (not mes_alt) cout << '-' << endl;
    else cout << endl;
}