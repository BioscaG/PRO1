#include <iostream>
using namespace std;

int main() {
    char n;
    cin >> n;
    if (int (n) > 47 and int (n) < 58) cout << "digit" << endl;
    else if (int (n) > 64 and int (n) < 123) cout << "lletra" << endl;
    else cout << "res" << endl;
}
