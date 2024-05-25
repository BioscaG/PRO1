#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

void transposa(Matriu& m) {
    int n = m.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int e = 1 + i; e < n; ++e) {
            int aux = m[i][e];
            m[i][e] = m[e][i];
            m[e][i] = aux;
        }
    }
}


