#include <iostream>
using namespace std;

int main() {
    int n;
    int count2 = 0;
    while (cin >> n) {
        int n2 = n;
        int count = 0;
        while (n2/10 != 0) {
            ++count;
            n2 /= 10;
        }
        int div = 1;
        for (int i = 0; i < count; ++i) {
            div *= 10;
        }
        if (n/div == n%10 and n >= 0) {
            cout << n << endl;
            ++count2;
        }
    }
    cout << "total: " << count2 << endl;
}
