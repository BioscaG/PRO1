#include <iostream>
using namespace std;

// Pre: en la entrada hay una secuencia
// Post: escribe del revés la sec de entrada
void reves(int& count) {
    string s;
    if (cin >> s) {
        ++count;
        reves(count);
        if (count <= 0) cout << s << endl;
        count -= 2;
    }
}

int main() {
    int count = 0;
    reves(count);
}
