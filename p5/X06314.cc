#include <iostream>
using namespace std;


void info_sequencia(int& suma, int& ultim) {
    int n;
    int n_anterior = 0;
    suma = 0;
    cin >> n;
    while (n != 0) {
        suma += n;
        n_anterior = n;
        cin >> n;
    }
    ultim = n_anterior;
}
int main() {
    int suma, ultim;
    info_sequencia(suma, ultim);
    int suma_primera = suma;
    int ultim_primera = ultim;
    int count = 1;
    info_sequencia(suma, ultim);
    while (suma != 0) {
        if (ultim == ultim_primera and suma == suma_primera) ++count;
        info_sequencia(suma, ultim);
    }
    cout << count << endl;
}
