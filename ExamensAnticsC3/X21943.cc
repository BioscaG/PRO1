#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

struct Student {
    string name;
    int right;
    int wrong;
};

vector<int> read_right_answers(int m) {
    vector<int> v(m); 
    for (int i = 0; i < m; ++i) {
        cin >> v[i]; 
    }
    return v; 
}

vector<Student> get_info_test(vector<int> v, int n) {
    vector<Student> s(n); 
    for (int i = 0; i < n; ++i) {
        cin >> s[i].name; 
        for (int j = 0; j < v.size(); ++j) {
            int m;
            cin >> m; 
            if (m == 0); 
            else if (v[j] == m) ++s[i].right; 
            else ++s[i].wrong;  
        }
    }
    return s; 
}

int nota(int right, int wrong) {
    return (right*2 - wrong); 
}

bool cmp(Student a, Student b) {
    int nota_a = nota(a.right, a.wrong); 
    int nota_b = nota(b.right, b.wrong);
    if (nota_a > nota_b) return true; 
    if (nota_a < nota_b) return false; 
    if (a.wrong < b.wrong) return true; 
    if (a.wrong > b.wrong) return false; 
    return (a.name < b.name); 
}

void write_results(const vector<Student>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].name << ' ' << v[i].right << ' ' << v[i].wrong << endl; 
    }
}
int main() {
    int m;
    cin >> m;
    vector<int> answer = read_right_answers(m);
    int n;
    cin >> n;
    vector<Student> v = get_info_test(answer, n);
    sort(v.begin(), v.end(), cmp);
    write_results(v);
}