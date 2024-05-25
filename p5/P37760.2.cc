#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    double n;
    while (cin >> n) {
        n = (n/360)*2*M_PI;
        cout << sin(n) << ' ' << cos(n) << endl;
    }
}
