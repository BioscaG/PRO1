#include <iostream>
using namespace std;

int main() {
    int n, m, mf, nf;
    cin >> n;
    int suma = 0;
    for (int i = 0; i < n/4; ++i) {
        m = (n - 4*i)/7;
        if (i == 0) suma = m + i;
        if ((m + i) < suma) {
            suma = m + i;
            mf = m;
            nf = i;
        }
    }
    cout << mf << ' ' << nf << endl;
}




