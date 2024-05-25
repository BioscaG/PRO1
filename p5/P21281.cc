#include <iostream>
using namespace std; 

void factor(int n, int& f, int& q) {
    f = n; 
    q = 0; 

    for (int i = 2; i*i <= n; ++i) {
        int current_frequency_factor = 0; 

        while (n%i == 0) {
            ++current_frequency_factor; 
            n /= i; 
        }

        if (current_frequency_factor > q) {
            q = current_frequency_factor; 
            f = i; 
        }
    }

    if (q == 0) q = 1; 
}          

            

