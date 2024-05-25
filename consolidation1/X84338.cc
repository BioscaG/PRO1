#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int div = n;
    int count = 1;
    while (div/10 != 0) {
        ++count;
        div /= 10;
    }
    int mit_1, mit_2;
    if (count%2 == 0) {
        int base = 1;
        for (int i = 0; i < count; ++i) base *=10;
        for (int e = 0; e < count/2; ++e) {
            mit_2 = n%base;
            n /= 10;
            base /= 10;
        }
        for (int z = 0; z < count/2; ++z) {
            mit_1 = n%base;
            n /= 10;
            base /= 10;

        }
    }
    cout << mit_1 << ' ' << mit_2 << endl;



    cout << count << endl;
}


