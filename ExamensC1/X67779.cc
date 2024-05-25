#include <iostream>
using namespace std;

int main() {
    int n;
    int n_max;
    bool cond = false;
    int count = 0;
    int count_verificar = 0;
    while (not cond and cin >> n) {
        ++count_verificar;
        if (count_verificar > 1) {
            if (n*2 == n_max and count%2 == 0) cond = true;
            ++count;
            if (not cond and n > n_max) {
                n_max = n;
                count = 0;
            }
        }
        else n_max = n;
    }
    if (cond and count_verificar > 1) cout << n << endl;
    else cout << "no existe" << endl;
}







