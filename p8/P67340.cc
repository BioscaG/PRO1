#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matriu;


void read_matriu(Matriu& s, int f, int c) {
    for (int i = 0; i < f; ++i) {
        for (int e = 0; e < c; ++e) {
            cin >> s[i][e];
        }
    }
}

void escriure_posicions(int y, int x, int b, int a) {
    cout << '(' << y + 1 << ',' << x + 1 << ')' << "<->(" << b + 1<< ',' << a + 1<< ')' << endl;
}

void escriu_amenaces(const Matriu& s, int y, int x, int f, int c) {
    int a = x + 1;
    int b = y + 1;
    bool found = false;
    while (a < f and b < c and not found) {
        if (a >= 0 and a < c and b >= 0 and b < f and s[b][a] == 'X') {
            found = true;
            escriure_posicions(y, x, b, a);
        }
        ++a;
        ++b;
    }
    a = x + 1;
    b = y - 1;
    found = false;
    while (a < f and b >= 0 and not found) {
        if (a >= 0 and a < c and b >= 0 and b < f and s[b][a] == 'X') {
            found = true;
            escriure_posicions(y, x, b, a);
        }
        ++a;
        --b;
    }
    a = x - 1;
    b = y - 1;
    found = false;
    while (a >= 0 and b >= 0 and not found) {
        if (a >= 0 and a < c and b >= 0 and b < f and s[b][a] == 'X') {
            found = true;
            escriure_posicions(y, x, b, a);
        }
        --a;
        --b;
    }
    a = x - 1;
    b = y + 1;
    found = false;
    while (a >= 0 and b < c and not found) {
        if (a >= 0 and a < c and b >= 0 and b < f and s[b][a] == 'X') {
            found = true;
            escriure_posicions(y, x, b, a);
        }
        --a;
        ++b;
    }
}


int main() {
    int f, c;
    cin >> f >> c;
    Matriu s(f, vector<char>(c));
    read_matriu(s, f, c);
    for (int i = 0; i < f; ++i) {
        for (int e = 0; e < c; ++e) {
            if (s[i][e] == 'X') escriu_amenaces(s, i, e, f, c);
        }
    }
}



