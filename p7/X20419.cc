#include <iostream>
#include <vector>
#include <string>
using namespace std;

char lletra_mes_frequent(const string& s) {

    const int LONG_ALFABET = 'z' - 'a' + 1;
    vector<int> v(LONG_ALFABET, 0);

    for (int i = 0; i < s.size(); ++i) {
        ++v[int(s[i]) - int('a') + 1];
    }

    int num_max = 1;
    int posicion_max = LONG_ALFABET + 1;
    char lletra_max = ' ';

    for (int i = 0; i < LONG_ALFABET; ++i) {
        if (v[i] > num_max) {
            num_max = v[i];
            posicion_max = i;
            lletra_max = char(i + int('a'));
        }
        else if (v[i] == num_max and i < posicion_max) {
            num_max = v[i];
            posicion_max = i;
            lletra_max = char(i + int('a'));
        }

    }

    return lletra_max - 1;
}


int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    double n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    double mitjana = 0;
    for (int i = 0; i < n; ++i) {
        mitjana += v[i].size()/n;
    }
    cout << mitjana << endl;
    for (int i = 0; i < n; ++i) {
        if (v[i].size() >= mitjana) {
            cout << v[i] << ": " << lletra_mes_frequent(v[i]) << endl;
        }
    }
}
