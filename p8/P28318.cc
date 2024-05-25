#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;

int main() {
    int f, c;
    cin >> f >> c;
    Matriz m(f, Fila(c));
    for (int i = 0; i < f; ++i) {
        for (int e = 0; e < c; ++e) {
            cin >> m[i][e];
        }
    }
    string s;
    int n;
    while(cin >> s >> n) {
        cout << s << ' ' << n;
        if (s == "fila") {
            cout << ":";
            for (int i = 0; i < c; ++i) {
                cout << ' ' << m[n - 1][i];
            }
        }
        else if (s == "columna") {
            cout << ":";
            for (int i = 0; i < f; ++i) {
                cout << ' ' << m[i][n - 1];
            }

        }
        else {
            int e;
            cin >> e;
            cout << ' ' << e << ":";
            cout << ' ' << m[n - 1][e - 1];
        }
        cout << endl;
    }
}



