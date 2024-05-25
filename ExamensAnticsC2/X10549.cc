#include <iostream>
using namespace std; 

int elimina_zeros(int x) {
    if (x/10 == 0) {
        return x;
    }
    else {
        if (x%10 != 0) {
            return x%10 + elimina_zeros(x/10)*10; 
        }
        else return elimina_zeros(x/10); 
    }
}


int main() {
    int n; 
    while (cin >> n) {
        cout << elimina_zeros(n) << endl; 
    }
}