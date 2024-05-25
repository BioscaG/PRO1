#include <iostream>
using namespace std; 


void convergeix(int n, int& k, int& lluny) {
    k = 0; 
    lluny = n; 
    while (n != 1) {
        if (n%2 == 0) n /= 2; 
        else n = n*3 + 1; 
        if (n > lluny) lluny = n; 
        ++k; 
    }
}

int main() {
    int m, p;  
    cin >> m >> p; 
    int maxim = m;
    for (int i = 1; i <= m; ++i) {
        int k, lluny; 
        convergeix(i, k, lluny);
        if (k >= p) cout << i << endl; 
        if (lluny > maxim) maxim = lluny; 
    }
    cout << "S'arriba a " << maxim << '.' << endl; 
}
