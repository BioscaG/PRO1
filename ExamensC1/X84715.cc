#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int z = 0; z < i; ++z) cout << ' ';
        cout << 'V';
        for (int e = 0; e < 1 + 2*(n - 2) - 2*i; ++e) cout << ' ';
        if (i < (n - 1)) cout << 'V';
        cout << endl;
    }

}
