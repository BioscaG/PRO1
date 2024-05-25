#include <iostream>
#include <vector>
using namespace std;

bool es_primer(int n) {
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) return false;
    }
    return true;
}

//pre: ---
//post. da dos
bool suma_primer(const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        for (int e = i + 1; e < v.size(); ++e) {
            if (es_primer(v[i] + v[e])) return true;
        }
    }
    return false;
}


int main() {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        if (suma_primer(v)) cout << "si" << endl;
        else cout << "no" << endl;
    }
}

