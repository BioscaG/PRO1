#include <iostream>
using namespace std;

int main() {
    int f, c;
    cin >> f >> c;

    for (int i = 0; i < f; ++i) {
        int num_izq = i%10;
        int num_izq_op = num_izq;
        for (int z = 0; z < num_izq; ++z) {
            cout << num_izq_op;
            --num_izq_op;
        }
        cout << 0;
        int num_der = c - num_izq - 1;
        int num_der_op = 1;
        for (int e = 0; e < num_der; ++e) {
            cout << num_der_op%10;
            ++num_der_op;
        }
        cout << endl;
    }
}

