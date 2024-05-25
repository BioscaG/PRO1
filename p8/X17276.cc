#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

bool creciente(const Matriu& m, int x, int y) {
    int a = x;
    int b = y;
    int x_size = m[0].size();
    int y_size = m.size();
    while (x < x_size - 1 and y < y_size - 1) {
        if (m[y][x] >= m[y + 1][x + 1]) return false;
        ++x;
        ++y;
    }
    x = a;
    y = b;
    while (x > 0 and y < y_size - 1) {
        if (m[y][x] >= m[y + 1][x - 1]) return false;
        --x;
        ++y;
    }
    x = a;
    y = b;
    while (x < x_size - 1 and y > 0) {
        if (m[y][x] >= m[y - 1][x + 1]) return false;
        ++x;
        --y;
    }
    x = a;
    y = b;
    while (x > 0 and y > 0) {
        if (m[y][x] >= m[y - 1][x - 1]) return false;
        --x;
        --y;
    }
    return true;
}


int main() {
    int n, m;
    while (cin >> n >> m) {
        Matriu c(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int e = 0; e < m; ++e) {
                cin >> c[i][e];
            }
        }
        int x, y;
        cin >> y >> x;
        if (creciente(c, x, y)) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
