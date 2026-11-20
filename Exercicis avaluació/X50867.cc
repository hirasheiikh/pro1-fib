// Add or remove includes
#include <iostream>
#include <string>

using namespace std;

// Adapt the header of the function to your case
int simpleAlternatedSum(int n){ //5 --> 5 + (-4) + 3 + (-2) + 1 = 3
    if (n == 1) return 1;
    else{
        if (n%2 != 0) return n + simpleAlternatedSum(n - 1);  
        else return -n + simpleAlternatedSum(n - 1);

    }
}

// Adapt the call to 'function_name' and the way it is called to your case.
int main()  {
    int n;
    while (cin >> n)
        cout << simpleAlternatedSum(n) << endl;
}
