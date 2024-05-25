#include <iostream>
#include <vector>
using namespace std;



vector<bool> criba(int m) {
    vector<bool> v(m + 1, true);
    v[0] = v[1] = false;
    for (int i = 2; i*i <= m; ++i) {
        if (v[i] == true) {
            for (int j = i*i; j <= m; j = j + i) v[j] = false;
        }
    }
    return v;
}

int main() {
    const int M = 1000000;
    vector<bool> p = criba(M);
    int x;
    while (cin >> x) {
        if (p[x]) cout << x << " es primer" << endl;
        else cout << x << " no es primer" << endl;
    }
}








































