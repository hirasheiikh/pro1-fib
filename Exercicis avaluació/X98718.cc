#include <iostream>
using namespace std;

int main(){
    char pri,sec,ter;
    int count = -1;
    int count_aaa = 0;
    int count_aba = 0;
    int count_abb = 0;
    int count_baa = 0;
    int count_bba = 0;
    int count_bab = 0;
    int count_bbb = 0;
    int count_aab = 0;
    bool found = false;

    cin >> pri >> sec;
    while (not found){
        cin >> ter;
        if (pri == 'a' and sec == 'a' and ter == 'a') {
            ++count_aaa;
            if (count_aaa == 2) found = true;
            else{
                pri = sec;
                sec = ter;
            }
        }
        else if (pri == 'a' and sec == 'b' and ter == 'b') {
            ++count_abb;
            if (count_abb == 2) found = true;
            else{
                pri = sec;
                sec = ter;
            }
        }
        else if (pri == 'a' and sec == 'b' and ter == 'a') {
            ++count_aba;
            if (count_aba == 2) found = true;
            else{
                pri = sec;
                sec = ter;
            }
        }
        else if (pri == 'a' and sec == 'a' and ter == 'b') {
            ++count_aab;
            if (count_aab == 2) found = true;
            else{
                pri = sec;
                sec = ter;
            }
        }
        else if (pri == 'b' and sec == 'b' and ter == 'b') {
            ++count_bbb;
            if (count_bbb == 2) found = true;
            else{
                pri = sec;
                sec = ter;
            }
        }
        else if (pri == 'b' and sec == 'a' and ter == 'b') {
            ++count_bab;
            if (count_bab == 2) found = true;
            else{
                pri = sec;
                sec = ter;
            }
        }
        else if (pri == 'b' and sec == 'b' and ter == 'a') {
            ++count_bba;
            if (count_bba == 2) found = true;
            else{
                pri = sec;
                sec = ter;
            }
        }
        else {
            ++count_baa;
            if (count_baa == 2) found = true;
            else{
                pri = sec;
                sec = ter;
            }
        }
        ++count;
        
    }
    /*
    pri, seg, ter
    a     a    a    a
    pri = seg;
    seg = ter;
          pri, seg, ter
          a     a    a
    cin >> ter (a)
    */
   cout << pri << sec << ter << ' ' << count << endl;
}