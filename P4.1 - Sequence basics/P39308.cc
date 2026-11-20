#include <iostream>
using namespace std;
int main() {
   int n;
 
   while (cin >> n){
       cout << "divisors de " << n << ":";
         int root = 1;

           while (root * root < n) ++root;
           for (int i = 1; i <= root; ++i){
               if (n%i == 0) cout << ' ' << i;
           }
           for (int j = root - 1; j >= 1; --j){
               if(n%j == 0 and n/j != root) cout << ' ' << n/j;
           }
           cout << endl;
       }
   }