#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

struct Info {
    string country_name;
    double gini;
};

bool cmp(Info a, Info b) {
    if (a.gini < b.gini) return true; 
    if (a.gini == b.gini) {
        if (a.country_name < b.country_name) return true; 
    }
    return false; 
}

//pre: quintile_data represents a country income by quintile info
//post: returns the gini coef corresponding to quintile_data 
double gini_coef(const vector<double>& quintile_data) {
    double suma = 0; 
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            suma += (quintile_data[j] - quintile_data[i]);
        }
    }
    return suma/500; 
}

vector<double> create_vector() {
    vector<double> v(5); 
    for (int i = 0; i < 5; ++i) {
        cin >> v[i]; 
    }
    return v; 
}

void write_vector(const vector<Info>& v){
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].country_name << ' ' << v[i].gini << endl; 
    }

}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n; 
    cin >> n; 
    vector<Info> v(n); 
    for (int i = 0; i < n; ++i) {
        cin >> v[i].country_name; 
        v[i].gini = gini_coef(create_vector());
    }
    sort(v.begin(), v.end(), cmp); 
    write_vector(v); 
}