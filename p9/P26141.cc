#include <iostream>
#include <cmath>
using namespace std; 

struct Racional {
    int num; 
    int den;
};

int pequeño(int a, int b) {
    if (abs(a) > abs(b)) return b; 
    return a; 
}

void canvi(Racional& r) {
    if (r.num*r.den == 0) r.den = 1;
    else if (r.num*r.den < 0) {
        r.num = abs(r.num)*(-1); 
        r.den = abs(r.den); 
    } 
    else {
        r.num = abs(r.num); 
        r.den = abs(r.den); 
    }
}

Racional racional(int n, int d) {
    Racional l; 
    l.num = n; 
    l.den = d; 
    for (int i = 2; i <= abs(pequeño(l.num, l.den)); ++i) {
        if (l.num%i == 0 and l.den%i == 0) {
            l.num /= i; 
            l.den /= i; 
            i = 1; 
        }
    }
    canvi(l); 
    return l; 
}

int mes_gran(int a, int b) {
    if (a > b) return a; 
    return b; 
}

int exponencial(int a, int exp) {
    int n = a; 
    for (int i = 1; i < exp; ++i) {
        n *= a;  
    }
    return n; 
}

int mcmnum(int a, int b) {
    int total = 1; 
    int n = mes_gran(a, b); 
    for (int i = 2; i <= n; ++i) {
        int count = 0; 
        while (a%i == 0) {
            ++count; 
            a /= i; 
        }
        int count2 = 0;
        while (b%i == 0) {
            ++count2; 
            b /= i;
        } 
        if (count != 0 or count2 != 0) total *= exponencial(i, mes_gran(count, count2)); 
    }
    return total; 
}

Racional operacio(Racional a, Racional b, string s) {
    Racional operacio;  
    if (s == "suma" or s == "resta") {
        int n = mcmnum(a.den, b.den);
        a.num = (n/a.den)*a.num; 
        b.num = (n/b.den)*b.num; 
        if (s == "suma") operacio.num = a.num + b.num;
        else if (s == "resta") operacio.num = a.num - b.num; 
        operacio.den = n; 
    }
    else if (s == "multiplica") {
        operacio.num = a.num*b.num; 
        operacio.den = a.den*b.den; 
    }
    else if (s == "divideix") {
        operacio.num = a.num*b.den;
        operacio.den = a.den*b.num; 
    }
    return operacio; 
}

void write(Racional n) {
    if (n.den == 1) {
        cout << n.num; 
    }
    else if (n.num%n.den == 0) {
        cout << n.num/n.den; 
    }
    else {
        cout << n.num << '/' << n.den; 
    }
    cout << endl; 
}

int main() {
    Racional n; 
    cin >> n.num >> n.den; 
    write(racional(n.num, n.den)); 
    Racional m; 
    string s; 
    while (cin >> s >> m.num >> m.den) { 
        n = operacio(n, m, s);
        n = racional(n.num, n.den); 
        write(n);
    }
}