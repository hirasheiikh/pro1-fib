#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int>v(1001,0);
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i){
        int num;
        cin >> num;
        int last_four_digits = num%10000;
        v[last_four_digits] = v[last_four_digits] + 1;
    } 
    int vsize = v.size();
    for (int i = 0; i < vsize; ++i){
        if (v[i]!= 0) cout << 1000000000 + i << " : " << v[i] << endl;
    }
    
}