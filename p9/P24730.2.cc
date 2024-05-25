#include <iostream>
#include <vector>
using namespace std;

struct Professor {
    string name;
    int candy;
    int carrot;
};

vector<Professor> leer_profes(int n) {
    vector<Professor> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i].name >> v[i].candy >> v[i].carrot;
    return v;
}

void print(const vector<Professor>& v) {
    for (int i = 0; i < v.size(); ++i) cout << v[i].name << endl;
}

bool cmp(const Profe&a, const Profe& b) {
    if (a.candy != b.candy) {
        return a.candy > b.candy;
    }
    if (a.carrot != b.carrot) return a.carrot > b.carrot;
    if (a.name.size() != b.name.size()) return a.nom.size() < b.nom.size();
    return a.nom < b.nom;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        vector<Professor> profes =  leer_profes(p);
        sort(profes.begin(), profes.end(), cmp);
        print(profes);
    }
}
