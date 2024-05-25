#include <iostream>
using namespace std; 

bool is_univariate(int n) {
    int ultim_digit = n%10; 
    n /= 10; 
    while (n != 0) {
        if (n%10 != ultim_digit) return false; 
        n /= 10; 
    }
    return true; 
}

int main() {
    int n; 
    bool found = false; 
    int count = 0; 
    cin >> n; 
    while (not found and n != -1) {
        ++count; 
        if (is_univariate(n)) found = true; 
        cin >> n; 
    }
    if (found) cout << count << endl;
    else cout << 0 << endl; 
}