#include <iostream>
#include <vector>
using namespace std; 

int suma_digits(int n) {
    if (n/10 == 0) {
        return n; 
    }
    else {
        return n%10 + suma_digits(n/10);
    }
}

int riu_trobada(int n, int digit) {
    const int MAX = 16384; 
    while (n <= MAX and digit <= MAX) {
        if (n > digit) digit += suma_digits(digit); 
        else if (n < digit) n += suma_digits(n); 
        else return n; 
    }
    return -1; 
}

int trobada_de_rius(int n) {
    for (int i = 1; i <= 9; i = i*3) {
        if (riu_trobada(n, i) != -1) return riu_trobada(n, i); 
    }
    return -1; 
}

int main() {
    int n; 
    cin >> n; 
    cout << trobada_de_rius(n) << endl; 
}
