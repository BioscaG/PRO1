#include <iostream>
using namespace std;

int main() {
    int h0, m0, h1, m1, hf, mf;
    cin >> h0 >> m0 >> h1 >> m1;
    if (h0 > h1) hf = 24 - h0 + h1;
    else hf = h1 - h0;
    --hf;
    if (60 - m0 + m1 > 59) {
        mf = - m0 + m1;
        ++hf;
    }
    else mf = 60 - m0 + m1;
    cout << hf/10 << hf%10 << ':' << mf/10 << mf%10 << endl;

}




