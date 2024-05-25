#include <iostream>
#include <vector>
using namespace std;

int main() {
    //utilizar un vector como contador hasta tener mil casillas
    //si le resto mil millones ya me da el numero en el que esta el contador

    const int M = 1000000000;
    vector<int> cont(1001, 0);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++cont[x - M];
    }

    for (int i = 0; i < 1001; ++i) {
        if (cont[i] != 0) cout << i + M << " : " << cont[i] << endl;
    }
}
