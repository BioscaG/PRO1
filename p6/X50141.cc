#include <iostream>
using namespace std;

int engreixa(int x) {
    if (x/10 == 0) {
        return x;
    }
    else {
        if (engreixa(x/10)%10 >= x) return engreixa(x/10)*10 + engreixa(x/10)%10;
        else return engreixa(x/10)*10 + x;
    }
}

int main() {
    int x;
    cin >> x;
    cout << engreixa(x) << endl;
}

