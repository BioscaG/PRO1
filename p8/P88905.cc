#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
    int size_a = a.size();
    int size_b = b[0].size();
    Matriu m(size_a, vector<int>(size_b));
    for (int i = 0; i < size_a; ++i) {
        for (int e = 0; e < size_b; ++e) {
            for (int z = 0; z < a[0].size(); ++z) {
                m[i][e] += a[i][z]*b[z][e];
            }
        }
    }
    return m;
}
