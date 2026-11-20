#include <iostream>
using namespace std;

int main(){
    char pri, sec, ter;
    int count_happy = 0;
    int count_sad = 0;

    bool guion = false;
    cin >> pri >> sec; // : -
    while (cin >> ter) { // : - - // )
        if (sec == '-') guion = true; // sec = - , guion =  true; // sec sigue siendo -, entonces guion = true;
        if (ter != '-') guion = false; // ter = -, no entra // ahora ter = ), entonces guion = false;
        if (not guion) { //guion = true; no entra. // guion = false, entramos en el ig
            if ((pri == ':' and sec == '-' and ter == ')') or (pri == '(' and sec == '-' and ter == ':')){
            ++count_happy; 
            }
            else if ((pri == ':' and sec == '-' and ter == '(') or (pri == ')' and sec == '-' and ter == ':')){
                ++count_sad;
            }
            pri = sec; // pri =  -
            sec = ter; // sec = )
        }
        /*
        :   -   -   )    -
        pri,sec,ter 
        pri,sec,    ter
            pri,    sec,ter
        */

       //hay que tener en cuenta que los - en posición ter nos dan igual porque sec ya lo es, por tanto seguimos añadiendo ---- hasta que ter != -.
    }
    cout << count_happy << ' ' << count_sad << endl;
}