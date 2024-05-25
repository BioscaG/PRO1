#include <iostream>
using namespace std;

bool es_primer(int n) {
    if (n < 2) return false;
    else {
        for (int i = 2; i*i <= n; ++i) {
            if (n%i == 0) return false;
        }
        return true;
    }
}

int main() {
    int n;
    cin >> n;
    while (es_primer(n)) {
        if (es_primer(n)) {
            ++n;
            while (not es_primer(n)) ++n;
            cout << n << endl;
        }
        cin >> n;
    }
}


