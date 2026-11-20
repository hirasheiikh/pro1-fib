#include <iostream>
using namespace std;

void reverse(int &count){
    string word;
    if (cin >> word){ //jordi // mireia 
        ++count;
        reverse(count);
        if (count <= 0) cout << word << endl;
        count -= 2;

        
    }
}

int main(){
    int count = 0;
    reverse(count);
}