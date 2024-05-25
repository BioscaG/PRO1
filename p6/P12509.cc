#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1; 
    else if (n > 1) {
    return n *= factorial(n - 1);
    }
    else {
        return n; 
    }
}

int main() {
    int n; 
    cin >> n; 
    cout << factorial(n) << endl; 
}
