#include <iostream>
using namespace std; 

struct Rellotge {
    int h;      // hores (0<=h<24)
    int m;      // minuts (0<=m<60)
    int s;      // segons (0<=s<60)
};

Rellotge mitja_nit() {
    Rellotge r; 
    r.h = 00; 
    r.m = 00; 
    r.s = 00; 
    return r; 
}

void incrementa(Rellotge& r) {
    if (r.s < 59) ++r.s; 
    else {
        if (r.m < 59) {
            ++r.m;
        }
        else {
            if (r.h < 23) {
                ++r.h;  
            }
            else {
                r.h = 0;  
            }
            r.m = 0; 
        }
        r.s = 0; 
    }
}

void escriu(const Rellotge& r) {
    cout << r.h/10 << r.h%10 << ':' << r.m/10 << r.m%10 << ':' << r.s/10 << r.s%10 << endl; 
}