#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double a, b, k;
    while (cin >> a >> b >> k) {
        bool cond = true;
        double cont = 0;
        double sum = 0;
        while (cond) {
            sum += 1/(a + cont*k);
            ++cont;
            if (a + cont*k > b) cond = false;
        }
        cout << sum << endl;
    }
}

