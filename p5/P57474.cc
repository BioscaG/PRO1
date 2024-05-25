#include <iostream>
using namespace std;

int factorial(int n) {
    int c = 1;
    for (int i = 2; i <= n; ++i) {
        c *= i;
    }
    return c;
}
