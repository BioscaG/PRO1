#include <iostream>
using namespace std; 

int suma_digits(int n) {
    if (n/10 == 0) {
        return n; 
    }
    else {
        return n%10 + suma_digits(n/10); 
    }
}

int main() {
    int n, n_ant;
    int count = 0; 
    cin >> n; 
    n_ant = n; 
    while (cin >> n) {
        if (n_ant%suma_digits(n) == 0) ++count;
        n_ant = n; 
    }
    cout << count << endl; 
}