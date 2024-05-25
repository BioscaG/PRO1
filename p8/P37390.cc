#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
    Matriu producte(a.size(), vector<int>(b.size()));
    for (int i = 0; i < producte.size(); ++i) {
        for (int e = 0; e < producte.size(); ++e) {
            int suma = 0;
            for (int z = 0; z < producte.size(); ++z) {
                suma += a[z][i]*b[e][z];
            }
            producte[i][e] = suma;
        }
    }
    return producte;
}



