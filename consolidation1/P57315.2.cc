#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    int A, B, C;
    cin >> n1 >> n2 >> n3;
    if (n1 > n2 and n1 > n3) {
        C = n1;
        if (n2 > n3) {
            A = n3;
            B = n2;
        }
        else {
            A = n2;
            B = n3;
        }
    }
    else if (n2 > n1 and n2 > n3) {
        C = n2;
        if (n1 > n3) {
            A = n3;
            B = n1;
        }
        else {
            A = n1;
            B = n3;
        }

    }
    else if (n3 > n2 and n3 > n1) {
        C = n3;
        if (n1 > n2) {
            A = n2;
            B = n1;
        }
        else {
            A = n1;
            B = n2;
        }
    }
    string l;
    cin >> l;
    if (l == "ABC") cout << A << B << C;
    else if (l == "ACB") cout << A << C << B;
    else if (l == "BAC") cout << B << A << C;
    else if (l == "BCA") cout << B << C << A;
    else if (l == "CBA") cout << C << B << A;
    else cout << C << A << B;

}


