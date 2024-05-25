#include <iostream>
using namespace std;

int main() {
    int n, b;
    while (cin >> n >> b) {
        bool num = true;
        int p = 2;
        int exp_ant = 0;
        while (num) {
            int exp = 1;
            for (int i = 0; i < n; ++i) {
                exp *= p;
            }
            if (exp > exp_ant and exp < b) exp_ant = exp;
            else if (exp > b) num = false;
            ++p;
        }
        cout << exp_ant << endl;
    }
}


