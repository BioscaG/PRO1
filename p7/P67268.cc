#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        for (int i = 1; i <= n; ++i) {
            cout << v[n - i];
            if (i < n) cout << ' ';
        }
        cout << endl;
    }
}
