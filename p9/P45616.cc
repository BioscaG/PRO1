#include <iostream>
using namespace std;

struct Rellotge {
         int h;      // hores (0<=h<24)
         int m;      // minuts (0<=m<60)
         int s;      // segons (0<=s<60)
};

Clock midnight() {
    Clock m¨idnight = {0, 0, 0};
    return midnight;
}

void print(int x) {
    if (x < 10) cout << 0;
    cout << x;
}

void print(const Clock& r) {
    print(r.h);
    cout << ':';
    print(r.m);
    cout << ':';
    print(r.s);
    cout << endl;
}

void increase(Clock& r) {
    ++r.s;
    if (r.s == 60) {
        r.s = 0;
        ++r.m;
        if (r.m == 60) {
            r.m = 0;
            ++r.h;
            if (r.h == 24) r.h = 0;
        }
    }
}



