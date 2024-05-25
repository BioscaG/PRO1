#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
    int n = a.size();
    Matriu m(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int e = 0; e < n; ++e) {
            for (int z = 0; z < n; ++z) {
                m[i][e] += a[i][z]*b[z][e];
            }
        }
    }
    return m;
}
