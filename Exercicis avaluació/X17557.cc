#include <iostream>
using namespace std;

int main(){
    char x;
    int count_c = 0;
    int count_d = 0;
    int count_actd = 0;
    bool found_a = false;
    
    while (cin >> x){
        if (x == 'a'){
            found_a = true;
            count_d += count_actd;
            count_actd = 0;
        }
        if (x == 'd') ++count_actd;
        if (x == 'b'){
            if (found_a) found_a = false;
            count_actd = 0;
        }
        if (found_a and x == 'c') ++count_c;
    }
    cout << count_c << ' ' << count_d << endl;
}