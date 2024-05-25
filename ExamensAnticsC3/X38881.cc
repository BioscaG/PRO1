#include <iostream>
#include <vector>
using namespace std; 

// Pre: p, pref estàn formades per lletres minúscules
// Post: retorna true si pref és prefix de p, false en cas contrari
bool prefix(const string& p, const string& pref) {
    if (pref.size() > p.size()) return false; 
    for (int i = 0; i < pref.size(); ++i) {
        if (p[i] != pref[i]) return false; 
    }
    return true; 
}


int main() {
    int n; 
    int position = 0; 
    while (cin >> n) {
        ++position; 
        string m_first; 
        int count = 1; 
        cin >> m_first; 
        for (int i = 1; i < n; ++i) {
            string m; 
            cin >> m; 
            if (prefix(m_first, m)) ++count; 
        }
        cout << "Linea " << position << ": " << count << " - " << m_first << endl; 
    }
}