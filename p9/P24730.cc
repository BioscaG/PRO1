#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Professor {
    string nom;
    int caramel;
    int pastanagues;
};

vector<Professor> llegeix(int n) {
    vector<Professor> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i].nom >> p[i].caramels >> p[i].pastanagues;
    }
    return p;
}

bool comp(Professor p1, Professor p2) {
    if (p1.caramels == p2.caramels) {
        if (p1.pastanagues == p2.pastanagues) {
            if (p1.nom.size() == p2.nom.size()) {
            return p1.nom < p2.nom;
            }
            return p1.nom.size() < p2.nom.size();
        }
        return p1.pastanagues > p2.pastanagues;
    }
    return p1.caramels > p2.caramels;
}

void print(const vector<Professor>& p) {
    int n = p.size();
    for (int i = 0; i < n; ++i) cout << p[i].nom << endl;
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        vector<Professor> p = llegeix(t);
        sort(p.begin(), p.end(), comp);
        print(p);
    }
}



