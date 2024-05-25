#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

Matrix create_vector(int fil, int col) {
    Matrix m(fil, Row(col));
    for (int i = 0; i < fil; ++i) {
        for (int e = 0; e < col; ++e) cin >> m[i][e];
    }
    return m;
}


void write(int y, int x, int y2, int x2) {
    cout << '(' << y + 1 << ',' << x + 1 << ")<->(" << y2 + 1 << ',' << x2 + 1 << ')' << endl;
}


void write_amenaces(const Matrix& m, int y, int x) {
    int num_col = m[0].size();
    int num_fil = m.size();
    int x0 = x;
    int y0 = y;
    bool found = false;
    while (x0 < num_col - 1 and y0 < num_fil - 1 and not found) {
        ++x0;
        ++y0;
        if (m[y0][x0] == 'X') {
            write(y, x, y0, x0);
            found = true;
        }
    }
    found = false;
    x0 = x;
    y0 = y;
    while (x0 > 0 and y0 < num_fil - 1 and not found) {
        --x0;
        ++y0;
        if (m[y0][x0] == 'X') {
            write(y, x, y0, x0);
            found = true;
        }
    }
    found = false;
    x0 = x;
    y0 = y;
    while (x0 > 0 and y0 > 0 and not found) {
        --x0;
        --y0;
        if (m[y0][x0] == 'X') {
            write(y, x, y0, x0);
            found = true;
        }
    }
    found = false;
    x0 = x;
    y0 = y;
    while (x0 < num_col - 1 and y0 > 0 and not found) {
        ++x0;
        --y0;
        if (m[y0][x0] == 'X') {
            write(y, x, y0, x0);
            found = true;
        }
    }
}


int main() {
    int fil, col;
    cin >> fil >> col;
    Matrix m = create_vector(fil, col);
    for (int i = 0; i < fil; ++i) {
        for (int e = 0; e < col; ++e) {
            if (m[i][e] == 'X') write_amenaces(m, i, e);
        }
    }
}




