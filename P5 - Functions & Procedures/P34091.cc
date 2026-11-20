#include <iostream>
using namespace std;

bool es_perfecte(int n){
    bool perfect = false;
    int result = 1;
    for (int i = 2; i * i < n; ++i){
        if (n%i == 0) result = result + i + n/i;
    }
    if (result == n and n > 1) perfect = true;
    else perfect = false;

    return perfect;

}

int main(){
    int x;
    cin >> x;
    cout << es_perfecte(x) << endl;
}
