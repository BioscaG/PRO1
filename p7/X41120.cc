#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cims(const vector<int>& v) {
    vector<int> cims(v.size());
    int count = 0;
    for (int i = 1; i < v.size() - 1; ++i) {
        if (v[i] > v[i - 1] and v[i] > v[i + 1]) {
            cims[count] = v[i];
            ++count;
        }
    }
    return cims;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int cims_count = 0;
    for (int i = 0; i < n; ++i) {
        if (calcula_cims(v)[i] != 0) ++cims_count;
    }
    cout << cims_count << ':';
    for (int i = 0; i < cims_count; ++i) {
        if (calcula_cims(v)[i] != 0) cout << ' ' << calcula_cims(v)[i];
    }
    cout << endl;
    vector<int> cims_mes_alts(cims_count);
    --cims_count;
    bool cim_alto = false;
    for (int i = 0; i < cims_count; ++i) {
        if (calcula_cims(v)[i] > calcula_cims(v)[cims_count]) {
            if (cim_alto) cout << ' ';
            cout << calcula_cims(v)[i];
            cim_alto = true;
        }
    }
    if (not cim_alto) cout << '-';
    cout << endl;
}



