#include <iostream>
using namespace std;

bool es_creixent(int n) {
    if (n%10 >= ((n%100 - n%10)/10)) {
        if (n/10 == 0) return true;
        else {
            n /= 10;
            return es_creixent(n);
        }
    }
    else return false;
}
int main() {
    int n;
    cin >> n;
    cout << es_creixent(n) << endl;
}



