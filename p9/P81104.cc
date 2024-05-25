#include <iostream>
#include <vector>
using namespace std; 

struct Alumne {
    string nom;                 // Nom de l’alumne
    int dni;                    // DNI de l’alumne
    vector<Assignatura> ass;    // Llista d’assignatures de l’alumne
};

struct Assignatura {
    string nom;                 // Nom de l’assignatura
    double nota;                // Entre 0 i 10, -1 indica NP
};

int posicio_dni(const vector<Alumne>& alums, int dni) {
    for (int i = 0; i < alums.size(); ++i) {
        if (alums[i].dni == dni) return i; 
    }
    return -1; 
}

int posicio_asignatura(const vector<Assignatura>& ass, string nom) {
    for (int i = 0; i < ass.size(); ++i) {
        if (ass[i].nom == nom) return i; 
    }
    return -1; 
}

double nota(const vector<Alumne>& alums, int dni, string nom) {
    if (posicio_dni(alums, dni) != -1) {
        if (posicio_asignatura(alums[posicio_dni(alums, dni)].ass, nom) != -1) return alums[posicio_dni(alums, dni)].ass[posicio_asignatura(alums[posicio_dni(alums, dni)].ass, nom)].nota; 
    }
    return -1; 
}

double mitjana(const vector<Assignatura>& ass) {
    double count = 0; 
    double mitjana = 0; 
    for (int i = 0; i < ass.size(); ++i) {
        if (ass[i].nota != -1) ++count;        
    }
    for (int i = 0; i < ass.size(); ++i) {
        if (ass[i].nota != -1) mitjana += ass[i].nota/count;  
    }
    return mitjana;
}

void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
    
}


