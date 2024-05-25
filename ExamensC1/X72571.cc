#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char t;
    int total = 0;
    int senar = 0;
    for (int i = 1; i <= n; ++i) {
        for (int e = 0; e < m; ++e) {
            cin >> t;
            total += int (t) - 48;
            if (i%2 != 0) senar += int (t) - 48;
        }
    }
    cout << total << ' ' << senar << endl;
}

