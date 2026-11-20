#include <iostream>
#include <cmath>
using namespace std;

//pre: the input is a date, the value of the components have to make sense, the numbers have to be natural numbers.
//post: the output says if the date is valid or not.


bool leap_year(int y){
    if (y%4 == 0 and y%100 != 0) return (true);
    else if (y%100 == 0 and (y/100%4) == 0) return (true);
    else return (false);
}
bool is_valid_date(int d, int m, int y){
    bool isleap_year = leap_year(y);
  

//general cases
    if (m > 0 and m < 13){
        //case of leap years and february
        if (m == 2){
            if (isleap_year and 0 < d and d < 30) return (true);
            else if (not isleap_year and 0 < d and d < 29) return (true);
            }
        else if ((m == 4) or (m == 6) or (m == 9) or (m == 11)){
            if (0 < d and d < 31)  return (true);
        }
        else if (0 < d and d < 32) return (true);
    }
    return (false);
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;

    cout << is_valid_date(d,m,y) << endl;
}