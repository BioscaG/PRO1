#include <iostream>
using namespace std; 

void read_rational(int& num, int& den) {
    int n_min; 
    if (num > den) n_min = den; 
    else n_min = num; 
    for (int i = 2; i <= n_min; ++i) {
        if (num%i == 0 and den%i == 0) {
            num /= i; 
            den /= i; 
            if (num > den) n_min = den; 
            else n_min = num; 
            i = 2; 
        }
    }
}

