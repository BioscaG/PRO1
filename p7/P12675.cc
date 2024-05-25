#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
    int comuns = 0;
    int i = 0;
    int j = 0;
    while (i < X.size() and j < Y.size()) {
        if (X[i] > Y[j]) ++j;
        else if (X[i] < Y[j]) ++i;
        else {
            ++i;
            ++j;
            ++comuns;
        }
    }
    return comuns;
}

