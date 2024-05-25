#include <iostream>
#include <vector>
using namespace std; 

typedef vector<int> Row; 
typedef vector<Row> Matrix; 

Matrix create_matrix(int n) {
    Matrix m(n, Row(n)); 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> m[i][j]; 
    }
    return m; 
}

bool hankel(const Matrix& m) {
    int n = m.size(); 
    for (int i = 1; i < n; ++i) {
        int j = i - 1;  
        int k = 1;
        while (j >= 0 and k < n) {
            if (m[j][k] != m[j + 1][k - 1]) return false;
            --j;
            ++k; 
        } 
    }
    for (int i = 1; i < n - 1; ++i) {
        int j = n - 2;  
        int k = i + 1;
        while (j >= 0 and k < n) {
            if (m[j][k] != m[j + 1][k - 1]) return false;
            --j;
            ++k; 
        } 
    }
    return true; 
}

int main() {
    int n; 
    cin >> n; 
    for (int i = 0; i < n; ++i) {
        int m; 
        cin >> m; 
        Matrix matrix = create_matrix(m); 
        if (hankel(matrix)) cout << "yes" << endl; 
        else cout << "no" << endl; 
    }
}