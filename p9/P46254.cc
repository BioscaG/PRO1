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