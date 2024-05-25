#include <vector>
#include <iostream>
#include <string>
using namespace std; 

string treure_signes(string s) {
    string p; 
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '.' and s[i] != ' ' and s[i] != ',') p += s[i]; 
    }
    return p; 
}

void ordenacio(string s) {
    int n = s.size(); 
    for (int i = 1; i < n; ++i) {
        int j = i; 
        char x = s[i]; 
        while (j > 0 and s[j - 1] > x) {
            s[j] = s[j - 1]; 
            --j; 
        }
        s[j] = x; 
    }
}

bool anagrames(string s1, string s2) {
    if (s1.size() != s2.size()) return false; 
    ordenacio(s1);
    ordenacio(s2); 
    cout << s1[0] << s1[1] << s1[2] << endl; 
    cout << s2[0] << s2[1] << s2[2] << endl; 
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i]) return false; 
    }
    return true; 
}

int main() {
    int n; 
    cin >> n; 
    string s1, s2; 
    for (int i = 0; i < n; ++i) {
        cin >> s1 >> s2; 
        s1 = treure_signes(s1); 
        s2 = treure_signes(s2);
        if (anagrames(s1, s2)) cout << "SI" << endl; 
        else cout << "NO" << endl; 
    }
}