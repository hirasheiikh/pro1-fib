#include <iostream>
using namespace std;

void reverse(){
    string word;
    cin >> word;
    if (word != "end"){
        reverse();
        cout << word << endl;
    }
}

int main(){
    reverse();
}