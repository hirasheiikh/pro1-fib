#include <iostream>
#include <vector>
using namespace std;

// Pre: c1,c2,c3 are pairwise different characters.
// Post: returns the number of triples (i1,i2,i3) such that 0<=i1<i2<i3<s.size() and
//       s[i1]=c1, s[i2]=c2, s[i3]=c3.
int numberSubsequences(const string &s, char c1, char c2, char c3){
    int countc1 = 0;
    int countc2 = 0;
    int countc3 = 0;

    for (int i = 0; i < s.size(); ++i){
        if (s[i] == c1) ++countc1; // numewro d'ulls o boques
        else if (s[i] == c2) countc2 += countc1; // combinació ulls/boques i nassos
        else if (s[i] == c3) countc3 += countc2; // combinació TOT
    }
    return countc3;
}


// Pre:
// Post: returns the number of triples (i1,i2,i3) such that 0<=i1<i2<i3<s.size() and
//       either s[i1]=':', s[i2]='-', s[i3]=')' or s[i1]='(', s[i2]='-', s[i3]=':'.
int numberHappySubsequences(const string &s){
    return numberSubsequences(s, ':', '-', ')') + numberSubsequences(s, '(', '-', ':');
}
// Pre:
// Post: returns the number of triples (i1,i2,i3) such that 0<=i1<i2<i3<s.size() and
//       either s[i1]=':', s[i2]='-', s[i3]='(' or s[i1]=')', s[i2]='-', s[i3]=':'.
int numberSadSubsequences(const string &s){
    return numberSubsequences(s, ':', '-', '(') + numberSubsequences(s, ')', '-', ':');
}

int main(){
    string s;
    while (cin >> s) cout << numberHappySubsequences(s) << ' ' << numberSadSubsequences(s) << endl;
}