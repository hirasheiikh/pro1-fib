#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last){
    int n;
    cin >> n;
    
    sum = 0;
    
    while(n != 0) {
        sum += n;
        last = n;
        cin >> n;
    }
}

int main(){
    int last, sum;
    info_sequence(sum, last);
    
    int count = 1;
    int last2, sum2;
    
    info_sequence(sum2, last2);
    while (sum2 != 0){
        if(sum == sum2  and last == last2) ++count;
        info_sequence(sum2,last2);
    }
    cout << count << endl;
}