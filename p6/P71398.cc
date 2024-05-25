#include <iostream>
using namespace std;

//primero caso recursivo
//seundo caso base

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    if (n < 10) {
        minim = n;
        maxim = n;
    }
    else {
        digit_maxim_i_minim(n/10, maxim, minim);
        int d = n%10;
        if (d < minim) minim = d;
        if (d > maxim) maxim = d;
    }
}
