#include <iostream>
#include <vector>
using namespace std;


typedef vector<int> Row;
typedef vector<Row> Matrix;

Matrix create_vector() {
    Matrix s(9, Row(9));
    for (int i = 0; i < 9; ++i) {
        for (int e = 0; e < 9; ++e) cin >> s[i][e];
    }
    return s;
}

bool num_rep_fil(const Matrix& s) {
    for (int i = 0; i < 9; ++i) {
        for (int e = 1; e < 9; ++e) {
            for (int z = 0; z < e; ++z) if (s[i][e] == s[i][z]) {
                return false;
            }
        }
    }
    for (int i = 0; i < 9; ++i) {
        for (int e = 1; e < 9; ++e) {
            for (int z = 0; z < e; ++z) if (s[e][i] == s[z][i]) {
                return false;
            }
        }
    }
     for (int t = 0; t < 9; t = t + 3) {
        for (int u = 0; u < 9; u = u + 3) {
            for (int i = t; i < t + 3; ++i) {
                for (int e = u; e < u + 3; ++e) {
                    for (int k = t; k < i; ++k) {
                        for (int j = u; j < e; ++j) {
                            if (s[i][e] == s[k][j]) return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Matrix s = create_vector();
        if (num_rep_fil(s)) cout << "si" << endl;
        else cout << "no" << endl;
    }
}

