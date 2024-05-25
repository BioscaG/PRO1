#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

vector<string> read(int n) {
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    return v;
}

Matrix read(int n, int m) {
    Matrix A(n, Row(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> A[i][j];
    }
    return A;
}

void print(const Matrix& A) {
    int n = A.size();
    int m = A[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << A[i][j];
            if (j != m - 1) cout << ' ';
        }
        cout << endl;
    }
}

void highlight(Matrix& sol, const Matrix& puzzle, const string& word) {
    int n = puzzle.size();
    int m = puzzle[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (puzzle[i][j] == word[0]) {
                highlight_down(sol, puzzle, word, i, j);
                highlight_right(sol, puzzle, word, i, j);
                highlight_diag(sol, puzzle, word, i, j);
            }
        }
    }
}

void solve (Matrix& solution, const Matrix& puzzle, const vector<string>& words) {
    int n = words.size();
    for (int i = 0; i < n; ++i) search(solution, puzzle, words[i]);
}

int main() {
    int x, m, n;
    bool first = true;
    while (cin >> x >> m >> n) {
        vector<string> words = read(x);
        Matrix puzzle = read(m, n);
        Matrix solution = puzzle;

        solve(puzzle, solution, words);

        if(first) first = false;
        else cout << endl;
        print(solution);
    }
}
