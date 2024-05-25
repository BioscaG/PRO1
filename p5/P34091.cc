#include <iostream>
using namespace std; 


bool es_perfecte(int n) {
    int suma = 1; 
    for (int i = 2; i*i < n; ++i) {
        if (n%i == 0) {
            suma += i;
            suma += n/i; 
        } 
    }
    return(suma == n and n != 1); 
}
int main() {
    int n; 
    cin >> n; 
    cout << es_perfecte(n) << endl; 
}