#include <iostream>
using namespace std;

int main() {
    int n, n1 = 0, n2 = 0, n3 = 0;
    char m;
    for (int i = 0; i < 3; ++i) {
        cin >> n;
        if (n > n1) {
            n2 = n1;
            n1 = n;
        }
        else if (n > n2) {
            n3 = n2;
            n2 = n;
        }
        else n3 = n;
    }
    for (int i = 0; i < 3; ++i) {
        cin >> m;
        if (m == 'A') cout << n3;
        else if (m == 'B') cout << n2;
        else cout << n1;
        if (i < 2) cout << ' ';
    }
    cout << endl;
}


