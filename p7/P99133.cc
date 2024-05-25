#include <iostream>
#include <vector>
using namespace std;

void escribir_girado(const string& s) {
    for (int i = s.size() - 1; i >= 0; --i) cout << s[i];

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    for (int i =  n - 1; i >= 0; --i) {
        escribir_girado(v[i]);
        cout << endl;
    }
}
