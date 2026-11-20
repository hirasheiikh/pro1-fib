// Add or remove includes
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;
// Pre: Sigui n el tamany v.size(). Llavors, per a cada i a {0..n-2}, es compleix |v[i]-v[i+1]|<=2.
//      A més, només hi ha un i a {0..n-2} que compleixi |v[i]-v[i+1]|=1.
// Post: La funció retorna el i praticular que compleix |v[i]-v[i+1]|=1.
int positionDistance1(const vector<int> &v){
    int lo = 0;
    int hi = v.size() - 1;

    while(lo < hi){
        int mid = (lo + hi + 1) / 2;
        if (v[mid]%2 == v[lo]%2) lo = mid;
        else hi = mid - 1;
    }
    return lo;
}

int main()  {
    vector<vector<int> > listinputs;
    vector<int> listsolutions;
    vector<int> listattempts;
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        listinputs.push_back(v);
        listsolutions.push_back(0);
    }
    int repetitions = max(1, 100000/int(listinputs.size()));
    for (int index = 0; index < int(listinputs.size()); index++)
        for (int i = 0; i < repetitions; i++)
            listattempts.push_back(index);
    random_shuffle(listattempts.begin(), listattempts.end());
    for (int r = 0; r < int(listattempts.size()); r++) {
        int i = listattempts[r];
        listsolutions[i] = positionDistance1(listinputs[i]);
    }
    for (int i = 0; i < int(listsolutions.size()); i++)
        cout << listsolutions[i] << endl;
}