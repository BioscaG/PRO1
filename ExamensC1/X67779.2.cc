#include <iostream>
using namespace std;

int main() {
    int n;
    int n_max = 0;
    int count = 0;
    bool encontrado = false;
    while (not encontrado and cin >> n) {
        if (n > n_max) {
            n_max = n;
            count = 0;
        }
        if (n_max/2 == n and count%2 != 0 and 2*n == n_max) {
            cout << n << endl;
            encontrado = true;
        }

        else ++count;
    }

    if (not encontrado) cout << "no existe" << endl;
}

