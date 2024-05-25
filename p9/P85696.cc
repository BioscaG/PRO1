#include <iostream>
#include <cmath>
using namespace std; 

struct Racional {
    int num, den;
};

int pequeño(int a, int b) {
    if (abs(a) > abs(b)) return b; 
    return a; 
}

void canvi(Racional& r) {
    if (r.num*r.den == 0) r.den = 1;
    else if (r.num*r.den < 0) {
        r.num = abs(r.num)*(-1); 
        r.den = abs(r.den); 
    } 
    else {
        r.num = abs(r.num); 
        r.den = abs(r.den); 
    }
}

Racional racional(int n, int d) {
    Racional l; 
    l.num = n; 
    l.den = d; 
    for (int i = 2; i <= abs(pequeño(l.num, l.den)); ++i) {
        if (l.num%i == 0 and l.den%i == 0) {
            l.num /= i; 
            l.den /= i; 
            i = 1; 
        }
    }
    canvi(l); 
    return l; 
}

