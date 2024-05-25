#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<string> Matrix;

Matrix value_letter() {
    Matrix s(7);
    s[0] = "ae";
    s[1] = "os";
    s[2] = "dinr";
    s[3] = "cltu";
    s[4] = "mp";
    s[5] = "bfghjqvxyz";
    s[6] = "kw";
    return s;
}

int main() {
    char c;
    int count = 0;
    Matrix s = value_letter();
    while (cin >> c) {
        if (c != ' ') {
            for (int i = 0; i < s.size(); ++i) {
                for (int e = 0; e < s[i].size(); ++e) {
                    if (c == s[i][e]) {
                        count = count + 1 + i;
                    }
                }
            }
        }
    }
    cout << count << endl;
}
