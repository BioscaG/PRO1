#include <iostream>
#include <vector>
using namespace std; 


int main() {
    string s;
    while (cin >> s) {
        int n;
        int max1, max2; 
        max1 = max2 = -1; 
        cin >> n; 
        while (n != -1) {
            if (n >= max1) {
                max2 = max1; 
                max1 = n;  
            }
            else if (n > max2 and n < max1) max2 = n;
            cin >> n; 
        } 
        cout << s << ": " << max1 << ' ' << max2 << endl; 
    }
}