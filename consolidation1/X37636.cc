#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char escala;
    double g;
    for (int i = 0; i < n; ++i) {
        char salida;
        cin >> escala >> g;
        if (escala == 'C') {
            g = 1.8*g + 32;
            salida = 'F';
        }
        else {
            g = (n - 32)/1.8;
            salida = 'C';
        }
        cout << salida << g << endl;
    }
}


