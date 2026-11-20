#include <iostream>
using namespace std;

int main(){
    char pri, sec, ter;
    int count_happy = 0;
    int count_sad = 0;

    cin >> pri >> sec;
    while (cin >> ter){
        if ((pri == ':' and sec == '-' and ter == ')') or (pri == '(' and sec == '-' and ter == ':')){
            ++count_happy;
        }
        else if ((pri == ':' and sec == '-' and ter == '(') or (pri == ')' and sec == '-' and ter == ':')){
            ++count_sad;
        }
        pri = sec;
        sec = ter;
    }
    cout << count_happy << ' ' << count_sad << endl;
}