#include <iostream>
using namespace std; 

int main() {
    int n; 
    cin >> n; 
    for (int i = 0; i < n; ++i) {
        int count = 0; 
        int m, m_ant; 
        cin >> m; 
        bool inicio = true; 
        int count = 1;
        int posicion = 1;  
        int posicion_max; 
        while (m != -1) {
            ++posicion; 
            m_ant = m; 
            if (not inicio) {
                if (m == m_ant) {
                    ++count; 
                    if (count == 2) posicion_max = posicion - 1; 
                }
                else 
            }


            
        }


    }
}