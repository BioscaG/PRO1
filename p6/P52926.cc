#include <iostream>
using namespace std;

void reves() {
    string s;
    cin >> s;
    if (s != "fi") {
        reves();
        cout << s << endl;
    }
}

int main() {
    reves();
}

