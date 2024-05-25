#include <iostream>
using namespace std;

bool is_subchain(int a, int b) {
    if (a/10 == 0 or b/10 == 0) {
        if (b < a) return false;
        else if (b%10 == a) return true;
        else return is_subchain(a, b/10);
    }
    else {
        if (a%10 == b%10) return is_subchain(a/10, b/10);
        else return is_subchain(a, b/10);
    }
}

int main() {
    int a, b;
    while (cin >> a) {
        cin >> b;
        if (is_subchain(a, b)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
