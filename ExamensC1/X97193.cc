#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    string cas;
    cin >> cas;
    while (cas != "acabar") {
        if (cas == "perimetro") {
            double a, b, c;
            cin >> a >> b >> c;
            cout << a + b + c << endl;
        }
        else if (cas == "area") {
            double a, b;
            cin >> a >> b;
            cout << (a*b)/2 << endl;
        }
        cin >> cas;
    }
}
