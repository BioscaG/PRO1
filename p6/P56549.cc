#include <iostream>
using namespace std;

void escriu_base(int n, int base) {
    if (n/base != 0) {
        escriu_base(n/base, base);
        if (n%base >= 10) {
            cout << char('A' + (n%base)%10);
        }
        else cout << n%base;
    }
    else {
        if (n%base >= 10) {
            cout << char('A' + (n%base)%10);
        }
        else cout << n%base;
    }
}




int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        escriu_base(n, 2);
        cout << ", ";
        escriu_base(n, 8);
        cout << ", ";
        escriu_base(n, 16);
        cout << endl;
    }
}

