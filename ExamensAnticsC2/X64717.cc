#include <iostream>
using namespace std; 

int main() {
    char c;  
    while (cin >> c) {
        int count = 0; 
        bool found = false;
        while (c != '$' and not found) {
            bool repeticion = true;  
            bool a_encontrada = false; 
            while (c != '#' and not found) {
                repeticion = false; 
                if (c == 'a') a_encontrada = true; 
                cin >> c; 
                if (c == '$') found = true; 
            }
            if (not a_encontrada and not repeticion) ++count; 
            cin >> c; 
        }
        cout << count << endl; 
    }

}