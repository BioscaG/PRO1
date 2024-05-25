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
        cout << count << endl;
        int div = 1;
        for (int i = 0; i < count; ++i) {
            div *= 10;
        }
        cout >> div >> endl;
        if (n/div == n%10) {
            cout << n << endl;
            ++count2;
        }
    }
    cout << count2 << endl;
}
