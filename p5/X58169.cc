#include <iostream>
using namespace std;

void infoSequencia(int& max, int& lpos) {
    int n;
    int position = 1;
    max = 0;
    cin >> n;
    while (n != 0) {
        if (n >= max) {
            lpos = position;
            max = n;
        }
        ++position;
        cin >> n;
    }
}

int main() {
    int max, lpos;
    infoSequencia(max, lpos);
    int s;
    int count = 1;
    bool num_segunda = false;
    cin >> s;
    if (s == max) num_segunda = true;
    while (s != max and s != 0) {
        ++count;
        cin >> s;
        if (s == max) num_segunda = true;
    }
    cout << max << ' ' << lpos << ' ';
    if (num_segunda) cout << count;
    else cout << '-';
    cout << endl;
}



