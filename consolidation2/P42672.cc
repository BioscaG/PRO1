#include <iostream>
using namespace std; 

int binari(int n) {
    if (n/2 == 0) {
        return n%2; 
    }
    else {
        return binari(n/2)*10 + n%2; 
    }
}

void intercalar(int a, int b) {
    if (b/10 == 0) {
        cout << a << b; 
    }
    else {
        intercalar(a/10, b/10); 
        cout << a%10 << b%10; 
    }
}
int main() {
    int a, b;
    cin >> a >> b; 
    intercalar(binari(a), binari(b)); 
    cout << endl;  
}