#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

int main() {
    int n, m;
    cin >> n >> m;

    Matriu c(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int e = 0; i < m; ++e) {
            cin >> c[i][e];
        }
    }



