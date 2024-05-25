#include <iostream>
using namespace std;

void descompon(int n, int& h, int& m, int& s) {
    h = n/(60*60);
    m = (n%(60*60))/60;
    s = (n%(60*60))%60;
}
