#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int count = 0;
    bool complem = false;
    while (not complem and m != -1) {
        ++count;
        if ((n + m)%10 == 0) {
            cout << m << ": " << count << endl;
            complem = true;
        }
        else cin >> m;
    }
    if (not complem) cout << "No existe" << endl;
}



