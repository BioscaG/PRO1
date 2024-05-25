#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    string m = " ";
    int cont = 0;
    bool existe = false;
    while (m != n and cin >> m) {
        ++cont;
        if (m == n) existe = true;
    }
    if (existe) cout << cont << endl;
    else cout << "No existe" << endl;
}


