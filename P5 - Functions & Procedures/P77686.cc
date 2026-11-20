#include <iostream> 
using namespace std;

int reverse(int n){
    int reversed = 0;
    while (n > 0){
        reversed *= 10;
        reversed += n%10;
        n/=10;
    }
    return reversed;
}
bool es_capicua(int n){
    return (reverse(n) == n);
}
int main() {
    int n;
    cin >> n;
    cout << es_capicua(n) << endl;

}