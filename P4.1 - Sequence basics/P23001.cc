#include <iostream>
using namespace std;

int main(){
    string ant,post;
    cin >> ant;
    int count_act = 1;
    int count_max = 1;
    
    while (cin >> post){
        if (ant == post){
            ++count_act;
            if (count_act > count_max) count_max = count_act;
        }
        else count_act = 0;
    }
    cout << count_max << endl;

}