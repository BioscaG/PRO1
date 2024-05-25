#include <iostream>
#include <vector>
using namespace std;

bool conte(string s1, string s2) {
    if (s1.size() > s2.size()) {
        int count;
        for (int i = 0; i < s2.size(); ++i) {
            if (s1[i] == s2[0]) count = i;
        }
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    for (int i = 0; i < n; ++i) {
        cout << v[i] << ": " << v[i];
        for (int e = 0; e < n; ++e) {
            if (e != i) {
                if (conte(v[i], v[e])) cout << ' ' << v[e];
            }
        }
        cout << endl;
    }
}

