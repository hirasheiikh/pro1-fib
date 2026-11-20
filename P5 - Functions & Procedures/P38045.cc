#include <iostream>
#include <cmath>
using namespace std;


//Pre: el parametro n es un natural
//Post: imprime el cuadrado y la raiz cuadrada del natural n;

void quadrat_i_potencia(double& n){
    cout << int(n*n) << ' ' << sqrt(n) << endl;
} 
int main(){
    cout.setf(ios::fixed);
    cout.precision(6);
    double n;
    while (cin >> n) quadrat_i_potencia(n);

}