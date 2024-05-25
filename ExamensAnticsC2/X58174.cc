#include <iostream>
#include <vector>
using namespace std;

vector<int> create_vector(int n) {
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    return v;
}

int anotacions_consolidades(const vector<int>& v) {
    int count = 0;
    for (int i = 2; i < v.size(); ++i) {
        if (v[i] > v[i - 1] and v[i] > v[i - 2]) ++count;
    }
    return count;
}

void write(string c, int n) {
    cout << c << ": " << n << endl;
}

int main() {
    int n;
    cin >> n;
    string c, c_max;
    int max_anotacions = 0;
    bool hay_equipos = false;
    while (cin >> c) {
        hay_equipos = true;
        vector<int> v = create_vector(n);
        int s = anotacions_consolidades(v);
        if (s > max_anotacions) {
            max_anotacions = s;
            c_max = c;
        }
        else if (s == max_anotacions) {
            if (c < c_max) c_max = c;
        }
        write(c, s);
    }
    cout << "----------" << endl;
    if (hay_equipos) write(c_max, max_anotacions);
    else cout << "no hay equipos" << endl;
}


