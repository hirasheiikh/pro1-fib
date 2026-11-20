#include <iostream>
#include <vector>
using namespace std;

int elements_comuns(const vector<int>& X, const vector<int>& Y){
    int sizeX = X.size();
    int sizeY = Y.size();

    int posX = 0;
    int posY = 0;
    
    int count = 0;
    while (posX < sizeX and posY < sizeY){
        if (X[posX] == Y[posY]){
            ++count;
            ++posX;
            ++posY;
        }
        else if (X[posX] > Y[posY]) ++posY;
        else ++posX;
    }
    return count;

}

int main()
{
    int n, m;
    while (cin >> m >> n) {

        vector<int> X(m);
        for (int i = 0; i < m; ++i)
            cin >> X[i];

        vector<int> Y(n);
        for (int i = 0; i < n; ++i)
            cin >> Y[i];

        cout << elements_comuns(X, Y) << endl;
    }
    return 0;
}
