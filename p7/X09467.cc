#include <iostream>
#include <vector>
using namespace std;

vector <bool> pos_rampas (const vector <int>& V) {
    vector<bool> rampa(V.size(), false);
    for (int i = 0; i < V.size() - 2; ++i) {
        if ((V[i] < V[i + 1] and V[i + 1] < V[i + 2]) or (V[i] > V[i + 1] and V[i + 1] > V[i + 2])) rampa[i] = true;
    }
    return rampa;
}

int pot_conflictives (const vector <bool>& B) {
    int num_confictives = 0;
    for (int i = 0; i < B.size() - 2; ++i) {
        if (B[i] and B[i + 1]) ++num_confictives;
        if (B[i] and B[i + 2]) ++num_confictives;
    }
    return num_confictives;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> V(n);
        for (int i = 0; i < n; ++i) {
            cin >> V[i];
        }
        cout << "posicions amb rampa:";
        for (int i = 0; i < n; ++i) {
            if (pos_rampas(V)[i]) cout << ' ' << i;
        }
        cout << endl;
        cout << "potencialment conflictives: " << pot_conflictives(pos_rampas(V)) << endl;
        cout << "---" << endl;
    }
}






