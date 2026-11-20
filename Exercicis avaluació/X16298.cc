#include <iostream>
#include <string>


using namespace std;


int endchar(const string &s, int start){
    char target = s[start];
    int low = start;
    int high = s.size() - 1;

    while (low <= high){
        int mid = (low + high)/2;
        if (s[mid] == target) low = mid + 1;
        else high = mid - 1;
    }
    return low - 1;
}

// Pre: s is formed with three different characters c1,c2,c3, and is of the form c1...c1c2...c2c3...c3.
// Post: n1, n2, n3 are the number of occurrences of c1, c2, c3 in s, respectively.
void numberOccurrences(const string &s, int &n1, int &n2, int &n3){
    n1 = 0;
    n2 = 0;
    n3 = 0;

    int numc1 = endchar(s, 0);
    n1 = numc1 + 1;

    int numc2 = endchar(s, n1);
    n2 = numc2 - numc1;

    int numc3 = endchar(s, n1 + n2);
    n3 = numc3 - numc2;

}


// Pre: s begins with one or more occurrences of a character c1, followed by one or more
//      occurrences of a character c2, followed by one or more occurrences of a character c3,
//      and there are no more characters in s.
//      moreover, either c1c2c3 = ":-)" or c1c2c3 = "(-:" or c1c2c3 = ":-(" or c1c2c3 = ")-:".
// Post: If c1c2c3 = ":-)" or c1c2c3 = "(-:", the function returns the number of happy subsequences.
//       If c1c2c3 = ":-(" or c1c2c3 = ")-:", the function returns the number of sad subsequences.
int numberHappyOrSadSubsequences(const string &s){
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    numberOccurrences(s, n1, n2, n3);
    return n1*n2*n3;
}

int main()  {
    int n1 = 0, n2 = 0, n3 = 0;
    string s;
    while (cin >> s) {
        numberOccurrences(s, n1, n2, n3);
        cout << numberHappyOrSadSubsequences(s) << endl;
    }
}
