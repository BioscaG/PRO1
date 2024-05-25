#include <iostream>
using namespace std;

void girar_paraula(int& n) {
    string s;
    if (cin >> s) {
        girar_paraula(n);
        if (n > 0) cout << s << endl;
        --n;
    }
}

int main() {
    int n;
    cin >> n;
    girar_paraula(n);
}

