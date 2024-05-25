#include <iostream>
using namespace std;

bool es_primo(int n) {
    if (n < 2) return false;
    else {
        for (int i = 2; i*i < n; ++i) {
            if (n%i == 0) return false;
        }
        return true;
    }
}

int main() {
    int x;
    cin >> x;
    while (es_primo(x)) {
        ++x;
        while (not es_primo(x)) ++x;
        cout << x << endl;
        cin >> x;
    }
}

