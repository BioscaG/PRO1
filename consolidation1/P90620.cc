#include <iostream>
using namespace std;

int main() {
    int n;
    const int PICO = 3143;
    int n_anterior = 0;
    bool n_mayor_pico = false;
    bool pico = false;
    bool inicio = true;

    cin >> n;
    while (not pico and n != 0) {

        if (n_mayor_pico) {
            if (n < n_anterior) pico = true;
        }
        if (not inicio and n > n_anterior and n > PICO) n_mayor_pico = true;
        n_anterior = n;
        cin >> n;
        inicio = false;
    }

    if (pico) cout << "SI" << endl;
    else cout << "NO" << endl;
}


