#include <iostream>
using namespace std; 

struct Fraccio {
    int num, den;   // sempre estrictament positius
};

int mcm(int x, int y) {
    while (x%y != 0) {
        int temp = x;
        x = y;
        y = temp%y;
    }
    return y; 
}

Fraccio suma(const Fraccio& x, const Fraccio& y) {


}