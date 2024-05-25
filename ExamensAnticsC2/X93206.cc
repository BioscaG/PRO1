#include <iostream>
#include <vector>
#include <string>
using namespace std; 

vector<string> create_vector(int n) {
    vector<string> s(n); 
    for (int i = 0; i < n; ++i) {
        cin >> s[i]; 
    }
    return s; 
}

void eliminar_repetides(vector<string>& s) {
    for (int i = 1; i < s.size(); ++i) {
        for (int e = 0; e < i; ++e) {
            if (s[i] == s[e]) s[i] = " "; 
        }
    }
}

void write_vector(const vector<string>& s) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != " ") cout << s[i] << endl; 
    }
}

int main() {
    int n; 
    while (cin >> n) {
        vector<string> s = create_vector(n);
        eliminar_repetides(s); 
        write_vector(s); 
        cout << endl; 
    }
}