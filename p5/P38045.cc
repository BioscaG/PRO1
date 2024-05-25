#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    double n;
    while (cin >> n) {
        cout << int(n*n) << ' ' << sqrt(n) << endl;
    }
}
