#include <iostream>
#include <vector>
using namespace std; 


void ordena_per_insercio(vector<double>& v) {
    int n = v.size(); 
    for (int i = 1; i < n; ++i) {
        int j = i; 
        double x = v[i]; 
        while (j > 0 and v[j - 1] > x) {
            v[j] = v[j - 1]; 
            --j; 
        }
        v[j] = x; 
    }
}
