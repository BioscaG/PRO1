#include <iostream>
using namespace std; 

int main() {
    char c;
    int less = 0; 
    int mid = 0; 
    int large = 0; 
    int count = 0; 
    bool espacio = false; 
    cin >> c;  
    while (c != '.') {
        if (c == '-') espacio = true; 
        else espacio = false; 
        if (not espacio) ++count; 
        else {
            if (count > 0) {
                if (count < 5) ++less; 
                else if (count < 10) ++mid; 
                else ++large; 
                count = 0; 
            }
        }
        cin >> c; 
    }
    if (count > 0) {
                if (count < 5) ++less; 
                else if (count < 10) ++mid; 
                else ++large; 
                count = 0; 
    }
    cout << less << ',' << mid << ',' << large << endl; 
}
