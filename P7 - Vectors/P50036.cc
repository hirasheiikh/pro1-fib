#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int avalua(const vector<int>& p, int x){
    int mida = p.size();
    int result = 0;
    for (int i = 0; i < mida; ++i){
        result += pow(x,i)*p[i];
    }
    return result;

}

int main(){
    vector<int>p = {3,2,5,-1};
    int x;
    cout << avalua(p,x) << endl;

}