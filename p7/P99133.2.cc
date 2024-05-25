#include <iostream>
#include <vector>
using namespace std;

void reves(int n) {
    string s;
    if (n != 0) {
        cin >> s;
        reves(n - 1);
        for (int i = s.size() - 1; i >= 0; --i) {
            cout << s[i];
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    reves(n);
}

