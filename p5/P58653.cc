#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
         cout << s << "('" << c << "') = ";
         if (b) cout << "cert" << endl;
         else cout << "fals" << endl;
}

bool lletra(char n) {
    return((n >= 'a' and n <= 'z') or (n >= 'A' and n <= 'Z'));
}
bool vocal(char n) {
    return(n == 'a' or n == 'e' or n == 'i' or n == 'o' or n == 'u' or n == 'A' or n == 'E' or n == 'I' or n == 'O' or n == 'U');
}
bool consonant(char n) {
    return(not vocal(n) and lletra(n));
}
bool majuscula(char n) {
    return(n >= 'A' and n <= 'Z');
}
bool minuscula(char n) {
    return(lletra(n) and not majuscula(n));
}
bool digit(char n) {
    return(n >= '0' and n <= '9');
}

int main() {
    char n;
    cin >> n;
    for (int i = 0; i < 6; ++i) {
        string s;
        bool b;
        if (i == 0) {
            s = "lletra";
            b = lletra(n);
        }
        else if (i == 1) {
            s = "vocal";
            b = vocal(n);
        }
        else if (i == 2) {
            s = "consonant";
            b = consonant(n);
        }
        else if (i == 3) {
            s = "majuscula";
            b = majuscula(n);
        }
        else if (i == 4) {
            s = "minuscula";
            b = minuscula(n);
        }
        else {
            s = "digit";
            b = digit(n);
        }
        escriu_linia(n, s, b);
    }
}

