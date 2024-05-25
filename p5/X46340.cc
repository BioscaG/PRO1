#include <iostream>
using namespace std;

int max_dos(int x, int y) {
    if (x > y) return x;
    else return y;
}
int min_dos(int x, int y) {
    if (x > y) return y;
    else return x;
}
int sum_min_max(int x, int y, int z) {
    int k = max_dos(x, y);
    int max = max_dos(k, z);
    int l = min_dos(x, y);
    int min = min_dos(l, z);
    return max + min;
}




