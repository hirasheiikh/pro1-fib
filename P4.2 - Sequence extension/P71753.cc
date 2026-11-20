#include <iostream> 
using namespace std;
int main(){
  int n,m,max,n2;
  while (cin >> n){
    cin >> m;
    max = m;
    for (int i = 1; i < n; ++i){
        cin >> n2;
        if (n2 > max) max = n2;
    }
    cout << max << endl;
  }
}                                            