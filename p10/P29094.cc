#include <iostream>
#include <vector>
using namespace std; 


int posicio_maxim(const vector<double>& v, int m) {
    double max = -1;  
    int posicio = 0; 
    for (int i = 0; i <= m; ++i) {
        if (v[i] > max) {
            max = v[i]; 
            posicio = i; 
        }
    }
    return posicio;  
}