#include <iostream>
using namespace std;


bool es_primer(int n) {
    if (n < 2) return false;
    else {
        for (int i = 2; i*i <= n; ++i) {
            if (n%i == 0) return false;
        }
        return true;
    }
}

bool es_primer_perfecte(int n) {
    if (n/10 == 0) return es_primer(n);
    else {
        int suma = 0;
        int n_copia = n;
        while (n_copia/10 != 0) {
            suma += n_copia%10;
            n_copia /= 10;
        }
        return (es_primer(suma) and es_primer_perfecte(suma));
    }
}

int main() {
    int n;
    cin >> n;
    cout << es_primer_perfecte(n) << endl;
}


