#include <iostream>
using namespace std; 

void cross(int n, char c) {
    for (int i = 0; i < n; ++i) {
        if (i != n/2) {
            for (int e = 0; e < n/2; ++e) {
                cout << ' '; 
            }
            cout << c; 
        }
        else {
            for (int e = 0; e < n; ++e) {
                cout << c; 
            }
        }
        cout << endl; 
    }
}
