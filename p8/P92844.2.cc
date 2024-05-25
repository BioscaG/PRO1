#include <iostream>
#include <vector>
using namespace std; 

typedef vector<char> Fila;
typedef vector<Fila> Rectangle;

bool c_exist_col(char c, const Rectangle& r, int col) {
    for (int i = 0; i < r.size(); ++i) {
        if (r[i][col] == c) return true; 
    }
    return false; 
}

bool c_exist_fil(char c, const Rectangle& r, int fil) {
    for (int i = 0; i < r[0].size(); ++i) {
        if (r[fil][i] == c) return true; 
    }
    return false; 
}

int col_left(char c, const Rectangle& r) {
    for (int i = 0; i < r[0].size(); ++i) if (c_exist_col(c, r, i)) return i;
    return -1;  
}
int col_right(char c, const Rectangle& r) {
    int n = r[0].size(); 
    for (int i = n - 1; i >= 0; ++i) if (c_exist_col(c, r, i)) return i; 
    return -1; 
}
int fil_up(char c, const Rectangle& r) {
    for (int i = 0; i < r.size(); ++i) if (c_exist_fil(c, r, i)) return i;
    return -1;  
}
int fil_down(char c, const Rectangle& r) {
    int n = r.size(); 
    for (int i = n - 1; i >= 0; ++i) if (c_exist_fil(c, r, i)) return i; 
    return -1; 
}

int fil_total(char c, const Rectangle& r) {
    if (fil_up(c, r) != -1 and fil_down(c, r) != -1) {
        return fil_down(c, r) - fil_up(c, r) + 1; 
    }
    else if (fil_up(c, r) == -1) {
        return fil_down(c, r) + 1; 
    }
    return 
}

void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols) {
    if (fil_up(c, r) == fil_down(c, r)) {
        if (col) 
    }
    



