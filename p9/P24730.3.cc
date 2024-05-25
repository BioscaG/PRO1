#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

struct Profe {
    string nom; 
    int caramels; 
    int pastanagues; 
};

typedef vector<Profe> Llista;

Llista crear_llista(int n) {
    Llista l(n); 
    for (int i = 0; i < n; ++i) {
        cin >> l[i].nom >> l[i].caramels >> l[i].pastanagues; 
    }
    return l; 
}

bool cmp(Profe p1, Profe p2) {
    if (p1.caramels == p2.caramels) {
        if (p1.pastanagues == p2.pastanagues) {
            int n1 = p1.nom.size(); 
            int n2 = p2.nom.size(); 
            if (n1 == n2) {
                return (p1.nom < p2.nom);
            }
            return (n1 < n2); 
        }
        return (p1.pastanagues > p2.pastanagues);
    }
    return (p1.caramels > p2.caramels); 
}

void write_names(const Llista& l) {
    for (int i = 0; i < l.size(); ++i) {
        cout << l[i].nom << endl; 
    }
}

int main() {
    int m; 
    cin >> m; 
    for (int i = 0; i < m; ++i) {
        int n; 
        cin >> n; 
        Llista l = crear_llista(n); 
        sort(l.begin(), l.end(), cmp); 
        write_names(l); 
        cout << endl; 
    }
    
}