#include <iostream>
using namespace std;
int main(){
    //3 1 3

    /*  
        #####
        #   #
        #   #
        #   #
        #####
        #   #
        #   #
        #   #
        #####
        #   #
        #   #
        #   #
        #####
        
    */
    int n,m,side; // n = num files // m = num columnes // side = tamany
    while (cin >> n >> m >> side){
        int amplitud = m*side + m + 1;
        // amplitud = 1*3 + 1 + 1 = 5
        int altura = n*side + n + 1; 
        // altura = 3*3 + 3 + 1 = 13
        for (int i = 0; i < altura; ++i){ 
            for (int j = 0; j < amplitud; ++j){
                if (i%(side + 1) == 0  or j%(side + 1) == 0) cout << '#';
                else cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
     }

}