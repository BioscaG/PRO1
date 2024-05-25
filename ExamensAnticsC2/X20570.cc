#include <iostream>
using namespace std; 


int suma_parells(int n) {
    if (n/10 == 0) {
        if (n%2 == 0) return n;
        return 0;  
    }
    else {
        if (n%2 == 0) return n%10 + suma_parells(n/10); 
        return suma_parells(n/10); 
    }
}

int main() {
    int x;
    while (cin >> x) cout << suma_parells(x) << endl;
}