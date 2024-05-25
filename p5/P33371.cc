#include <iostream>
using namespace std;

char codificat(char c, int k) {
    if (c >= 'a' and c <= 'z') {
        int num_char = int(c) + k;
        num_char %= int('z');
        return char(num_char + int('a') - 1);
    }
    else if (c == '_') return ' ';
    else return c;
}

int main() {
    char c;
    int k;

        cin >> k >> c;
        while (c != '.') {
            cout << codificat(c, k);
            cin >> c;
        }
        cout << endl;
    }


