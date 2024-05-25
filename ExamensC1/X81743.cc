#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    char n1, n2, m;
    cin >> n >> n1 >> n2 >> m;
    for (int i = 0; i < n; ++i) {
        if (m >= n1 and m <= n2) ++count;
        cin >> m;
    }
    cout << count << endl;
}

