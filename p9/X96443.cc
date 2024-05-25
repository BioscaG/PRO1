#include <iostream>
#include <vector>
using namespace std; 

typedef vector<char> Row; 
typedef vector<Row> Matrix; 

struct Coord {
    int x,y;
};

Coord seguentD (const Coord& p, int n) {
    Coord m; 
    if (p.y == 0 and p.x == n - 1) {
        m.x = 1; 
        m.y = n - 1; 
    }
    else if (p.y == 0) {
        m.y = p.x + 1; 
        m.x = 0; 
    } 
    else if (p.x == n - 1) {
        m.y = p.x; 
        m.x = p.y + 1; 
    }
    else {
        m.x = p.x + 1; 
        m.y = p.y - 1;
    }
    return m;
}

Coord salt(const Coord& p, int n, int d) {
    Coord m = p; 
    for (int i = 0; i <= d; ++i) {
        m = seguentD(m, n);
        cout << m.y << '*' << m.x << endl; 
    }
    return m;
}

Matrix write(int n) {
    Matrix m(n, Row(n)); 
    for (int i = 0; i < n; ++i) {
        for (int e = 0; e < n; ++e) cin >> m[i][e];
    }
    return m; 
}

void write(string s) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X' and s[i + 1] == 'X') {
            cout << ' ';
            ++i;  
        }
        else cout << s[i]; 
    }
    cout << endl; 
}

int main() {
    int n, d, l; 
    Coord p; 
    cin >> n >> d >> l >> p.y >> p.x; 
    Matrix m = write(n); 
    string s; 
    s += m[p.y][p.x]; 
    for (int i = 0; i < l; ++i) {
        p = salt(p, n, d); 
        cout << p.x << '+' << p.y << endl; 
        s += m[p.y][p.x]; 
    }
    write(s); 
}


