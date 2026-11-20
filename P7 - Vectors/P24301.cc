#include <iostream>
#include <vector>
using namespace std;

//podem fer servir un push back perquè passem els dos vectors amb const.
vector<int> concatenacio(const vector<int> & V1, const vector<int> & V2){
    vector<int> v1 = V1;
    int sizeV2 = V2.size();

    for (int i  = 0; i < sizeV2; ++i){
        v1.push_back(V2[i]);
    }
    return v1;

}


int main() {
  int n1;
  while (cin >> n1) {
    vector<int> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<int> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];
    vector<int> res = concatenacio(V1, V2);
    cout << res.size() << endl;
    for (int i = 0; i < (int)res.size(); ++i) cout << " " << res[i];
    cout << endl;
  }
  return 0;
}
