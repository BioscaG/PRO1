#include <iostream>
#include <vector>
using namespace std;


int avalua(const vector<int>& p, int x) {
    int eval = 0;
    for (int i = p.size() - 1; i >= 0; --i) {
        eval = eval*x + p[i];
    }
    return eval;
}
