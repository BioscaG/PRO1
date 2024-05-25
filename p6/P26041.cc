#include <iostream>
using namespace std;

// Pre: en la entrada hay una secuencia
// Post: escribe del revés la sec de entrada
void reves() {
    string s;
    if (cin >> s) {
        reves();
        cout << s << endl;
    }
}

int main() {
    reves();
}
