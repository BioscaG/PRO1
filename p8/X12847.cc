#include <iostream>
#include <vector>
using namespace std; 

typedef vector<char> Row; 
typedef vector<Row> Matrix; 

Matrix create_table() {
    Matrix t(10, Row(10, '.')); 
    for (int i = 0; i < 10; ++i) {
        char fil;
        int col, length; 
        char orientation; 
        cin >> fil >> col >> length >> orientation; 
        int fil_num = int(fil - 'a'); 
        --col; 
        if (orientation == 'v') {
            for (int l = fil_num; l < fil_num + length; ++l) t[l][col] = 'X';    
        }
        else {
            for (int l = col; l < col + length; ++l) t[fil_num][l] = 'X';
        }
    }
    return t; 
}

void write_table(const Matrix& t) {
    cout << "  " << 12345678910 << endl; 
    for (int i = 0; i < t.size(); ++i) {
        cout << char('a' + i) << ' '; 
        for (int e = 0; e < t[0].size(); ++e) cout << t[i][e]; 
        cout << endl; 
    }
}

bool hit(const Matrix& t, int y, int x) {
    if (t[y][x] == 'X') return true; 
    return false; 
}

int abs(int x) {
    if (x < 0) return x*(-1); 
    return x; 
}

int max_dif(int y, int x, int y2, int x2) {
    if (abs(x - x2) > abs(y - y2)) return abs(x - x2); 
    return abs(y - y2); 
}

int dist(Matrix& t, int y, int x) {
    int dist_min = 100; 
    for (int i = y; i < t.size(); ++i) {
        for (int e = 0; e < t[0].size(); ++e) {
            if (e != x or i != y) {
                if (t[i][e] == 'X') {
                    if (max_dif(y, x, i, e) < dist_min) dist_min = max_dif(y, x, i, e); 
                }
            }
        }
    }
    for (int i = y - 1; i >= 0; --i) {
        for (int e = 0; e < t[0].size(); ++e) {
            if (t[i][e] == 'X') {
                if (max_dif(y, x, i, e) < dist_min) dist_min = max_dif(y, x, i, e); 
            }
        }
    }
    return dist_min; 
}

int main() {
    Matrix t = create_table(); 
    write_table(t); 
    cout << endl; 
    char fil; 
    int col; 
    while (cin >> fil >> col) {
        int fil_num = char(fil - 'a'); 
        if (hit(t, fil_num, col - 1)) cout << fil << col << " tocat!" << endl; 
        else cout << fil << col << " aigua! vaixell mes proper a distancia " << dist(t, fil_num, col - 1) << endl; 
    }
}