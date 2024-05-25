#include <iostream>
#include <vector>
using namespace std; 


vector<int> create_vector(int n) {
    vector<int> v(n); 
    for (int i = 0; i < n; ++i) {
        cin >> v[i]; 
    }
    return v; 
}


double mitjana_pars(const vector<int>& v) {
    double count = 0; 
    double mitjana = 0; 
    for (int i = 0; i < v.size(); ++i) {
        if (v[i]%2 == 0) ++count; 
    } 
    for (int i = 0; i < v.size(); ++i) {
        if (v[i]%2 == 0) mitjana += v[i]/count; 
    }
    return mitjana; 
}


int last_position_of(const vector<int>& v, double x) {
    int last_position = -1;  
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] < x) last_position = i; 
    }
    return last_position; 
}


int main() {
    int n; 
    while (cin >> n) {
        vector<int> v = create_vector(n); 
        cout << last_position_of(v, mitjana_pars(v)) << endl; 
    } 
}



