#include <iostream>
using namespace std;

int max2(int x, int y) {
    if (x >= y) return x;
    else return y;
}
int max4(int a, int b, int c, int d) {
    int ab = max2(a, b);
    int abc = max2(ab, c);
    int abcd = max2(abc, d);
    return abcd;
}
int main() {

}
