#include <iostream>
#include <vector>
using namespace std;

bool mateixos_digits (int x, int y, int b){
	vector<int> v(b,0); //inicialitzem a 0 totes les pos
	int size = v.size();
	int xy= x*y;
    
    while(xy!= 0){
        if (x != 0) ++v[x%b]; //+1 a la pos del num
        if (y != 0) ++v[y%b]; //+1 a la pos del num
        --v[xy%b]; //-1 a la pos del num
        x/=b;
        y/=b;
        xy/=b;
    }
    for (int i = 0; i < size; ++i){
        if (v[i] != 0) return false; // si algun num del vector != 0 vol dir que xy i x,y no tenen els mateixos digits.
    }
    return true;
}

void escriu (int n, int b ){
	if(n!=0){
		escriu(n/b, b);
		int aux = n%b;
		if (aux<10) cout << aux;
		else cout << char(aux-10+'A');
	}
}
int main(){
    int x,y;
    while (cin >> x >> y){
        int bin = 2;
        bool entra = false;
        cout << "solucions per a " << x << " i " << y << endl;
        while(bin <= 16){
            bool resultat = mateixos_digits(x, y, bin);
            if (resultat) {
                escriu(x,bin);
                cout << " * ";
                escriu(y,bin);
                cout << " = ";
                int xy = x*y;
                escriu(xy, bin);
                cout << " (base " << bin << ')' << endl;
                entra = true;
                }
                ++bin;
            }
        if (not entra){
            cout << "cap" << endl;
        }
        cout << endl;
    }

}