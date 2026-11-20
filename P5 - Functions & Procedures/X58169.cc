#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos){
    int n;
    int i = 1;
    cin >> n;
    while (n != 0){
        if (n >= max){
            max =n;
            lpos = i;
        }
        ++i;
        cin >>n;
    }
}
int main(){
    int lpos, n;
    int max = 0;
    int i = 1;
    infoSequence(max, lpos);
    
    cout << max << ' ' << lpos << ' ';
    
    cin >> n;
    while (n != 0 and n != max){
        ++i;
        cin >> n;
    }
    if (n == max) cout << i << endl;
    else cout << '-' << endl;
}