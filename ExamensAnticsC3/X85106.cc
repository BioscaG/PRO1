#include <iostream>
#include <vector>
using namespace std; 

typedef vector<char> Binario;
typedef vector<Binario> Matriz;

// Pre: n > 0, m > 0
// Post: retorna una matriz de '0' y '1' con dimensiones n*m leída de la entrada
Matriz leer_matriz(int n, int m) {
    Matriz b(n, Binario(m)); 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> b[i][j]; 
    }
    return b; 
}

// Pre: -
// Post: escribe el string s, seguido por dos punts, seguido por el Binario b
void escribir(string s, const Binario& b) {
    cout << s << ":";
    for (int i = 0; i < b.size(); ++i) cout << " " << b[i];
    cout << endl;
}

// Pre: gamma.size() = epsilon.size()
// Post: retorna el consumo calculado como gamma*epsilon en decimal
int calcula_consumo(const Binario& gamma, const Binario& epsilon) {
    int gamma_suma = 0; 
    int epsilon_suma = 0; 
    int pot = 1; 
    int n = gamma.size(); 
    for (int i = n - 1; i >= 0; --i) {
        gamma_suma += int(gamma[i] - '0')*pot; 
        epsilon_suma += int(epsilon[i] - '0')*pot; 
        pot *= 2; 
    }
    return epsilon_suma*gamma_suma; 
}

// Pre: mat.size > 0; 0 <= j < mat[0].size()
// Post: retorna el bit más frecuente en la columna j de mat. En caso de empate retorna '0'.
char bit_mas_comun(const Matriz& mat, int j) {
    int n = mat.size(); 
    int count = 0; 
    for (int i = 0; i < n; ++i) {
        if (mat[i][j] == '0') count -= 1; 
        else count += 1; 
    }
    if (count > 0) return '1'; 
    return '0'; 
}

// Pre: mat.size > 0; gamma.size() == mat[0].size(); epsilon.size() == mat[0].size()
// Post: gamma y epsilon son el ratio gamma y epsilon de mat, respectivamente
void calcula_ratios(const Matriz& mat, Binario& gamma, Binario& epsilon) {
    for (int i = 0; i < mat[0].size(); ++i) {
        char bit = bit_mas_comun(mat, i); 
        gamma[i] = bit;  
        if (bit == '0') bit = '1';
        else bit = '0'; 
        epsilon[i] = bit;  
    }
}

int main() {
 int n, m;
    while (cin >> n >> m) {
        Matriz mat = leer_matriz(n, m);
        Binario gamma(m);
        Binario epsilon(m);
        calcula_ratios(mat, gamma, epsilon);
        escribir("Gamma", gamma);
        escribir("Epsilon", epsilon); 
        cout << "Consumo: " << calcula_consumo(gamma, epsilon) << endl << endl;
    }
}