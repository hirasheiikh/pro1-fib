#include <iostream>
using namespace std;
int main(){
    int count = -1;
    int count_a = 0;
    int count_b = 0;
    int count_c = 0;
    int count_d = 0;
    char x;
    bool found = false;

    while (not found){
        cin >> x;
        if (x == 'a'){
            ++count_a;
            if (count_a == 2) found = true;
        }
        else if (x == 'b'){
            ++count_b;
            if (count_b == 2) found = true;
        }
        else if (x == 'c'){
            ++count_c;
            if (count_c == 2) found = true;
        }
        else{
            ++count_d;
            if (count_d == 2) found = true;
        }
        ++count;
    }
    cout << x << ' ' << count << endl;




    
}