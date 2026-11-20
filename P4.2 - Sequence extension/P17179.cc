#include <iostream>
using namespace std;
int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        double max,min,ave,num;
        cin >> num;
        max = min = ave = num;
        int count = 1;
        for (int j = 1; j < x; ++j){
            cin >> num;
            if (num < min) min = num;
            if (num > max) max = num;
            ave += num;
            ++count;
        }
        cout << min << ' ' << max << ' ' << ave/count << endl;
    }
    
}