#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool pattern_match(string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    int position = 0;
    for (int i = 0; i < n1; ++i) if (s1[i] == '*') position = i;
    if (n2 >= n1 - 1) {
        for (int i = 0; i < position; ++i) if (s1[i] != s2[i]) return false;
        for (int i = 1; i < n1 - position; ++i) if (s1[n1 - i] != s2[n2 - i]) return false;
        return true;
    }
    return false;
}

int main() {
    string s1;
    while (cin >> s1) {
        cout << s1 << ':' << endl;
        int n;
        cin >> n;
        string s2;
        for (int i = 0; i < n; ++i) {
            cin >> s2;
            if (pattern_match(s1, s2)) cout << "    " << s2 << endl;
        }
    }
}
