#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char m;
        for (int e = 0; e < n; ++e) {
            cin >> m;
            if (n == e + i + 1) total += int (m) - 48;
            if (i == e) total += int (m) - 48;
        }
    }
    cout << total << endl;
}
