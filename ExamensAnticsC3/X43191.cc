#include <iostream>
using namespace std; 

// Pre: n >= 0, base > 1
// Post: returns true when n is a power of base.
//       returns false otherwise
bool is_power(int n, int base) {
    int k = base; 
    while (base <= n) {
        if (base == n) return true; 
        base *= k; 
    }
    return false; 
}

int mes_petit(int a, int b) {
    if (a < b) return a; 
    return b; 
}

bool parella_pot(int a, int b) {
    if (a == 1 or b == 1) return true; 
    for (int i = 2; i <= mes_petit(a, b); ++i) {
        if (is_power(a, i) and is_power(b, i)) return true; 
    }
    return false; 
}

int main() {
    int n; 
    while (cin >> n) { 
        int count = 0;
        int n_ant = n; 
        cin >> n; 
        while (n != 0) {
            if (parella_pot(n_ant, n)) ++count; 
            n_ant = n; 
            cin >> n; 
        }
        cout << count << endl; 
    }
}