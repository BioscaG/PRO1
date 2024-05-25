#include <iostream>
using namespace std; 

bool is_ptg(int a, int b) {
    int quadrat = a*a + b*b; 
    for (int i = 1; i <= quadrat/2; ++i) {
        if (i*i == quadrat) return true; 
    }
    return false; 
}

void write(int a, int b, int position) {
    cout << "First pythagorean pair " << a << ' ' << b << " at position " << position << endl; 
}

int main() {
    int a, b; 
    int count = 0; 
    bool found = false; 
    cin >> a; 
    while (not found and cin >> b) {
        ++count; 
        if (is_ptg(a, b)) {
            write(a, b, count); 
            found = true; 
        }
        a = b;  
    }
    if (not found) cout << "No pythagorean pairs" << endl;
}