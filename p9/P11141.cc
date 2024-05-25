#include <iostream>
#include <vector>
using namespace std; 

struct Estudiant {
    int dni;
    string nom;
    double nota;        // La nota és un valor entre 0 i 10, o -1 que representa NP
    bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
    int n = es.size();
    min = 10; 
    max = 0; 
    mitj = 0; 
    int presentats = 0; 
    for (int i = 0; i < n; ++i) {
        if (not es[i].repetidor and es[i].nota >= 0) ++presentats; 
    }
    if (presentats > 0) {
        for (int i = 0; i < n; ++i) {
            if (not es[i].repetidor and es[i].nota >= 0) {
                if (es[i].nota < min) min = es[i].nota; 
                if (es[i].nota > max) max = es[i].nota; 
                mitj += es[i].nota/presentats; 
                
            }
        }
    }
    else {
        min = -1; 
        max = -1; 
        mitj = -1; 
    }
}

