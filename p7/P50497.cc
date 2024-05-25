#include <iostream>
using namespace std;

bool es_palindrom(const string& s) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != s[s.size() - 1 - i]) return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    cout << es_palindrom(s) << endl;
}


