#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < (n - 1); ++i) cin >> v[i];
        for (int i = (n - 1); i == 0; --i) {
            cout << v[i];
            if (i > 0) cout << ' ';
        }
        cout << endl;
    }
}
