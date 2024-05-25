#include <iostream>
using namespace std; 

int main() {
    int m; 
    cin >> m; 
    for (int i = 0; i < m; ++i) {
        int n, n_ant;
        int position = 0; 
        int position_cadena;
        int max_long_cadena = 0;  
        int max_position_cadena;  
        int long_cadena = 1;
        bool cadena = false; 
        cin >> n; 
        n_ant = n; 
        while(n != -1) {
            ++position; 
            if (position > 1) {
                if (n == n_ant) {
                    if(not cadena) {
                        cadena = true;
                        ++long_cadena; 
                        position_cadena = position; 
                    }
                    else ++long_cadena;
                }
                else {
                    cadena = false;
                    if (max_long_cadena < long_cadena) {
                        max_long_cadena = long_cadena; 
                        max_position_cadena = position_cadena; 
                    } 
                    long_cadena = 1;  
                }  
                cout << "//" << long_cadena << endl;
                cout << "**" << max_long_cadena << endl; 
                cout << "??" << position_cadena << "??" << max_position_cadena << endl; 
            }
            n_ant = n; 
            cin >> n; 
        }
        cout << max_position_cadena << ' ' << max_long_cadena << endl; 
    }
}