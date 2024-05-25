#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        bool un_dig_inicio = true;
        bool un_dig = false;
        while (not un_dig) {
            int div = n;
            int count_dig = 1;
            while (div/10 != 0) {
                ++count_dig;
                div /= 10;
            }
            if (count_dig > 1 or un_dig_inicio) {
                int prod = 1;
                int mult = n;
                for (int i = 0; i < count_dig; ++i) {
                    prod *= mult%10;
                    mult /= 10;
                }
                cout << "El producte dels digits de " << n << " es " << prod << '.' << endl;
                n = prod;
                un_dig_inicio = false;
            }
            else {
                un_dig = true;
                cout << "----------" << endl;
            }
        }
    }

}

