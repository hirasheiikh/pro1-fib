#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z){
    int min = x;
    int max = x;
    if (max < y) max = y;
    else if (min > y) min = y;
    
    if (max < z) max = z;
    else if (min > z) min = z;

    return max + min;
}

int main() {
    int x,y,z;
    while (cin >> x >> y >> z) cout << sum_min_max(x,y,z) << endl;
}