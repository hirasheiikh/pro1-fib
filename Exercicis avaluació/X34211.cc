#include <iostream>
#include <vector>
using namespace std;



int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    string s;
    while (cin >> s){
        int result = 0;
        for (int i = 0; i < s.size(); ++i){
            if (s[i] == '+') result += v[i];
            else result -= v[i];
        }
        cout << result << endl;
    }
    



}