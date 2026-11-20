#include <iostream>
#include <vector>
#include <string>
using namespace std;

void read_data(vector<string> &s1){
    int sizes1 = s1.size();
    for (int i = 0; i < sizes1; ++i) cin >> s1[i];
}
bool conte(string s1, string s2){
    int sizes1 = s1.size();
    int sizes2 = s2.size();

    int poss1 = 0;
    int poss2 = 0;
    while (poss1 + sizes2 <= sizes1 and poss2 < sizes2){
        if (s1[poss1 + poss2] == s2[poss2]) ++poss2;
        else{
            poss2 = 0;
            ++poss1;
        }
    }
    return poss2 == sizes2;
}
void infixos(const vector<string>& s1){
    int sizes1 = s1.size();
    for (int i = 0; i < sizes1; ++i){
        cout << s1[i] << ':';
        for (int j = 0; j < sizes1; ++j){
            if (conte(s1[i], s1[j])) cout << ' ' << s1[j];
        }
    cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    vector<string> s1(n);
    read_data(s1);
    infixos(s1);
}