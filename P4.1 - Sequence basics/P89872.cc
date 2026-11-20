#include <iostream>
using namespace std;

int main(){
    string word;
    string largest = "a";
    string largest2 = "a";
    
    while(cin >> word){
        if (word != largest and word > largest2){
            if (word > largest) {
                largest2 = largest;
                largest = word;
            }
            else largest2 = word;
        }
    }
    cout << largest2 << endl;
}