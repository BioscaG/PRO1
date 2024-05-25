#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    vector<int> v(n);
    for (int i = 0; i < (n - 1); ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < (n - 1); ++i) {
        if (v[n - 1] == v[i]) ++count;
    }
    cout << count << endl;
}


