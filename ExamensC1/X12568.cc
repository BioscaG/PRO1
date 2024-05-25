#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            for (int e = 0; e < n; ++e) cout << '*';
        }
        else {
            for (int e = 0; e < i; ++e) cout << ' ';
            cout << '*';
            for (int e = 0; e < (n - 2 - i); ++e) cout << ' ';
            if (i < n - 1) cout << '*';
        }
        cout << endl;
    }
}
