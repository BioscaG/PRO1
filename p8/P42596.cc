#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

void min_max(const Matriu& mat, int& minim, int& maxim) {
    for (int i = 0; i < mat.size(); ++i) {
        for (int e = 0; e < mat[0].size(); ++e) {
            if (i == 0 and e == 0) {
                minim = mat[0][0];
                maxim = mat[0][0];
            }
            else {
                if (mat[i][e] > maxim) maxim = mat[i][e];
                else if(mat[i][e] < minim) minim = mat[i][e];
            }
        }
    }
}

int main() {
    int f, c;
    int diferencia = 0;
    bool primera_rotacion = true;
    int count = 0;
    int count_diferencia = 1;
    while (cin >> f >> c) {
        ++count;
        int minim, maxim;
        Matriu mat(f, vector<int>(c));
        for (int i = 0; i < f; ++i) {
            for (int e = 0; e < c; ++e) {
                cin >> mat[i][e];
            }
        }
        min_max(mat, minim, maxim);
        if (primera_rotacion) {
            diferencia = maxim - minim;
            primera_rotacion = false;
        }
        else {
            if (maxim - minim > diferencia) {
                diferencia = maxim - minim;
                count_diferencia = count;
            }
        }
    }
    cout << "la diferencia maxima es " << diferencia << endl;
    cout << "la primera matriu amb aquesta diferencia es la" << count_diferencia << endl;
}











