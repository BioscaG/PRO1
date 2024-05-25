#include <iostream>
#include <cmath>
using namespace std; 

struct Punt {
    double x, y;
};

double distancia(const Punt& a, const Punt& b) {
    double dif1 = abs(a.x - b.x); 
    double dif2 = abs(a.y - b.y); 
    return sqrt(dif1*dif1 + dif2*dif2); 
}

void desplaca(Punt& p1, const Punt& p2) {
    p1.x += p2.x; 
    p1.y += p2.y; 
}

struct Cercle {
    Punt centre;
    double radi;
};

void escala(Cercle& c, double esc) {
    c.radi *= esc; 
}

void desplaca(Cercle& c, const Punt& p) {
    c.centre.x += p.x; 
    c.centre.y += p.y; 
}

bool es_interior(const Punt& p, const Cercle& c) {
    if (distancia(p, c.centre) < c.radi) return true; 
    return false; 
}


