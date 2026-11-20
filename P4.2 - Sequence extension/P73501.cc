#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i){
        int x1, x2;
        int count = 0;
        cin >> x1;
        while (x1 != 0){
            cin >> x2;
            if (x1 < x2) ++count;
            x1 = x2;
        }
        cout << count << endl;

    }


}