#include <iostream>
using namespace std;

int main(){
   int h,m,s;
   cin >> h >> m >> s;
   if ((s+1)%60 == 0) {
       ++m;
       s = 0;
       if(m%60 == 0) {
           ++h;
           m = 0;
           if (h%24 == 0) h = 0;
       }
   }
   else ++s;
   cout << h/10 << h%10 << ":" << m/10 << m%10 << ":" << s/10 << s%10 << endl;
}