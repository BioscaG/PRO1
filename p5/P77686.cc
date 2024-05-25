#include <iostream>
using namespace std;

bool es_capicua(int n) {
    n_copia = n;
    int dig_n = 1;
    while (n_copia/10 != 0) {
        ++count dig_n;
        n_copia /= 10;
    }
    int pot_izq = 1;
    for (int i = 0; i < dig_n/2; ++i) {
        pot_izq *= 10;
    }
    int derecha = n%pot_izq;
    int izq = n/(pot_izq*10);
    int pot2 = 1;
    for (int e = 0; e < dig_n/2; ++e) {
        derecha = (n%pot

