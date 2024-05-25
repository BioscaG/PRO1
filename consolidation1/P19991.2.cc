#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char m;
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        for (int e = 0; e < n; ++e) {
            cin >> m;
            if (e - i == 0) suma += int (m) - int ('0');
            else if (e + i == n - 1) suma += int (m) - int ('0');
        }
    }
    cout << suma << endl;
}

