#include <iostream>
#include <vector>
using namespace std;

//pre:
//post:

double producte_escalar(const vector<double>& u, const vector<double>& v) {
    double scalar = 0;
    for (int i = 0; i <= u.size() - 1; ++i) {
        scalar += u[i]*v[i];
    }
    return scalar;
}



