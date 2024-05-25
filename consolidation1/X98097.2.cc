#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n;
    int count = 0;
    while (m != 0) {
        ++count;
        m /= 10;
    }
    int par = 0;
    int inpar = 0;
    int t = n;
    for (int i = 0; i < count; ++i) {
        if (i%2 != 0) inpar += t%10;
        else par += t%10;
        t /= 10;
    }
    cout << par << ' ' << inpar << endl;
    if (par == 0) cout << "0 = 0 * " << inpar << endl;
    else if (inpar == 0) cout << "0 = 0 * " << par << endl;
    else if (par > inpar) {
        if (par%inpar == 0) {
            cout << par << " = " << par/inpar << " * " << inpar << endl;
        }
        else cout << "res" << endl;
    }
    else {
        if (inpar%par == 0) {
            cout << inpar << " = " << inpar/par << " * " << par << endl;
        }
        else cout << "res" << endl;
    }
}

