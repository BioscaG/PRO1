#include <iostream>
#include <vector>
using namespace std; 

vector<int> create_vector(int n) {
    vector<int> v(n); 
    for (int i = 0; i < n; ++i) {
        cin >> v[i]; 
    }
    return v; 
}

bool suma_senar(int a, int b) {
    if ((a + b)%2 != 0) return true; 
    return false; 
}

int main() {
    int n; 
    while (cin >> n) {
        vector<int> v = create_vector(n);
        bool found = false;   
        int i = 1; 
        while (not found and i < n) {
            if (suma_senar(v[i - 1], v[i])) found = true; 
            ++i; 
        } 
        if (found) cout << "si" << endl; 
        else cout << "no" << endl; 
    }
}