#include <iostream>
using namespace std;

int main() {
    char n;
    int count = 0;
    int par = 0;
    int senar = 0;
    while (cin >> n) {
        ++count;
        if (count%2 != 0) par += int (n) - 48;
        if (count%2 == 0) senar += int (n) - 48;
    }
    bool multiplo = false;
    cout << senar << ' ' << par << endl;
    if (par > senar) {
        if (par%senar == 0) {
            cout << par << " = " << par/senar << " * " << senar << endl;
        }
    }
    else {
        if (senar%par == 0) {
            cout << senar << " = " << senar/par << " * " << par << endl;
        }
    }
}




