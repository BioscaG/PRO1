#include <iostream>
#include <vector>
using namespace std;


typedef vector<char> Row;
typedef vector<Row> Matrix;


Matrix create_vector_sopa(int fil, int col) {
    Matrix s(fil, Row(col));
    for (int i = 0; i < fil; ++i) {
        for (int e = 0; e < col; ++e) cin >> s[i][e];
    }
    return s;
}

vector<string> create_vector_string(int x) {
    vector<string> p(x);
    for (int i = 0; i < x; ++i) cin >> p[i];
    return p;
}

void print(const Matrix& p) {
    for (int i = 0; i < p.size(); ++i) {
        for (int e = 0; e < p[0].size(); ++e) {
            if (e != 0) cout << ' ';
            cout << p[i][e];
        }
        cout << endl;
    }
}

void highlight(Matrix& p, const vector<string> s) {
    int size_p_col = p[0].size();
    for (int i = 0; i < s.size(); ++i) {
        bool found = false;
        int fil = 0;
        while (fil < p.size() and not found) {
            int col = 0;
            while (s[i].size() <= size_p_col - col and not found) {
                if (p[fil][col] == s[i]) {
                    for (int k = col; k <


}

int main() {
    int x, n, m;
    while (cin >> x >> n >> m) {
        vector<string> s = create_vector_string(x);
        Matrix p = create_vector_sopa(n, m);

