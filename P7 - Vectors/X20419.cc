#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int LONG_ALFABET = 'z' - 'a' + 1;

char lletra_mes_frequent(const string& s){
    vector<int> v(LONG_ALFABET, 0);
    int sizes = s.size();
    int pos;
    int freq = 0;
    for (int i = 0; i < sizes; ++i) ++v[s[i] - 'a'];
    for (int i = 0; i < LONG_ALFABET; ++i){
        if (v[i] > freq){
            pos = i;
            freq = v[i];
        }
    }
    char c = 'a' + pos;
    return c;
}

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    cin >> n;
    double longitut = 0;
    vector<string> v(n);
    for (int i = 0; i < n; ++i){
        cin >> v[i];
        longitut += v[i].size();

    }
    double mitjana = longitut/n;
    cout << mitjana << endl;

    for (int i = 0; i < n; ++i){
        if (v[i].size() >= mitjana){
            cout << v[i] << ": " << lletra_mes_frequent(v[i]) << endl;
        }
    }

}