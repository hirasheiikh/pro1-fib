#include <iostream>
using namespace std;

int main(){
    string name, blank;
    int years;

    while (cin >> blank >> blank >> blank >> name >> blank >> blank >> blank >> years >> blank >> blank){
        cout << name << ", you look younger. I thought you were " << years - (years/10) << " years old." << endl;
    }
    
}