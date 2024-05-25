#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double x, p;
    cin >> x;
    double polin = 0;
    int pot = 1;
    while (cin >> p) {
        polin += p*pot;
        pot *= x;

    }

    cout << polin << endl;
}



