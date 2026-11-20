#include <iostream>
using namespace std;

int mcd(int a, int b){
    while (b > 0){
        int x;

        x = b;
        b = a%b;
        a = x;
    }
    return a;

}

void read_rational(int& num, int& dem){
    char divider;
    cin >> num >> divider >> dem;

    int ok = mcd(num,dem);
    num = num/ok;
    dem = dem/ ok;

}

int main(){
    int num, dem;
    read_rational(num, dem);
    cout << num << ' ' << dem << endl;


}