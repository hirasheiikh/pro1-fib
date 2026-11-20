#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
    }
    
int main() {
    char c;
    cin >> c;
    bool b;
    string s;
    
    if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')){
        b = true;
        s = "letter";
        print_line(c, s, b);
        
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U'){
            b = true;
            s = "vowel";
            print_line(c, s, b);
            
            b = false;
            s = "consonant";
            print_line(c, s, b);
        }
        else {
            b = false;
            s = "vowel";
            print_line(c, s, b);
            
            b = true;
            s = "consonant";
            print_line(c, s, b);
        }    
        
        if (c >= 'A' and c <= 'Z') {
            b = true;
            s = "uppercase";
            print_line(c, s, b);
            
            b = false;
            s = "lowercase";
            print_line(c, s, b);
        }
        else {
            b = false;
            s = "uppercase";
            print_line(c, s, b);
            
            b = true;
            s = "lowercase";
            print_line(c, s, b);
        }
        b = false;
        s = "digit";
        print_line(c, s, b);
    } 
        else if (c >= '0' and c <= '9'){
            b = false;
            s = "letter"; print_line(c, s, b);
            s = "vowel"; print_line(c, s, b);
            s = "consonant"; print_line(c, s, b);
            s = "uppercase"; print_line(c, s, b);
            s = "lowercase"; print_line(c, s, b);
            
            b = true;
            s = "digit"; print_line(c, s, b);
        }
        else {
           b = false;
           s = "letter"; print_line(c, s, b);
           s = "vowel"; print_line(c, s, b);
           s = "consonant"; print_line(c, s, b);
           s = "uppercase"; print_line(c, s, b);
           s = "lowercase"; print_line(c, s, b);
           s = "digit"; print_line(c, s, b);
        }
}