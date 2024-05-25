#include <iostream>
using namespace std;


int compara(int d1, int m1, int a1, int d2, int m2, int a2) {
    if (a1 > a2) return 1;
    else if (a1 < a2) return -1;
    else {
        if (m1 > m2) return 1;
        else if (m1 < m2) return -1;
        else {
            if (d1 > d2) return 1;
            else if (d1 < d2) return -1;
            else return 0;
        }
    }
}

int main() {
    int d1, d2, m1, m2, a1, a2;
    char n;
    while (cin >> d1) {
        cin >> n >> m1 >> n >> a1 >> d2 >> n >> m2 >> n>> a2;
        if (compara(d1, m1, a1, d2, m2, a2) == -1) cout << "anterior" << endl;
        else if (compara(d1, m1, a1, d2, m2, a2) == 0) cout << "igual" << endl;
        else cout << "posterior" << endl;
    }
}

