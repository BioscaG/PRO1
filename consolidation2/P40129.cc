#include <iostream>
#include <vector>
#include <string>
using namespace std; 


int main() {
    string s; 
    while (cin >> s) {
        int multiplicador = 0; 
        int suma = 0; 
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'X') suma += 10*(10 - i); 
            else if (s[i] == '?') multiplicador = 10 - i; 
            else {
                suma += int(s[i] - '0')*(10 - i); 
            }
        }
        bool found = false; 
        int count = 0; 
        while(not found) {
            if (((count*multiplicador) + suma)%11 == 0) {
                found = true;
                --count; 
            }
            ++count;  
        }
        if (count != 10) cout << count << endl;
        else cout << 'X' << endl; 


    }        
}
