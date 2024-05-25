#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row; 
typedef vector<Row> Flag;

Flag read_flag(int n) {
    Flag f(n, Row(n)); 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> f[i][j]; 
    }
    return f; 
}

bool normes(const Flag& v, int col) {
    int n = v.size();
    bool canvi_color = false; 
    int pos; 
    for (int i = 1; i < n; ++i) {
        if (canvi_color and v[i][col] != v[i - 1][col]) return false; 
        if (v[i][col] != v[i - 1][col]) {
            canvi_color = true;
            pos = i; 
        } 
    }
    if (canvi_color) {
        if (pos + col >= (n - 1)) return true;  
    }
    return false; 
}


int column_count(const Flag& v) {
    int count = 0; 
    for (int i = 0; i < v.size(); ++i) {
        if (normes(v, i)) ++count; 
    }
    return count; 
}


int main() {
    int n;
    while (cin >> n) {
        Flag flag = read_flag(n);
        cout << column_count(flag) << endl;
    }
}