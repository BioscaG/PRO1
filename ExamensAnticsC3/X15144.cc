#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std; 

struct Article {
    string identifier;
    string topic;
    int freq;
};


//pre: n > 0
//post: returns article vector formed by input channel data
vector<Article> initialize_art_vector(int n) {
    vector<Article> v(n); 
    for (int i = 0; i < n; ++i) {
        cin >> v[i].identifier >> v[i].topic;
        v[i].freq = 0;  
    }
    return v; 
}


//pre: v is non-empty
//post: write vector on output
void write_art_vector(const vector<Article>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].topic << ' ' << v[i].freq << ' ' << v[i].identifier << endl; 
    }
}

int posicio(vector<Article>& v, string s) {
    int i = 0; 
    int j = v.size() - 1;
    while (v[i].identifier != s) {
        int mid = (i + j)/2; 
        if (v[mid].identifier < s) i = mid + 1; 
        else j = mid; 
    }
    return i; 
}


void frecuencia(vector<Article>& v) {
    string s; 
    while (cin >> s) {
         int p = posicio(v, s); 
         ++v[p].freq; 
    }
}

bool cmp(Article a, Article b) {
    if (a.topic < b.topic) return true; 
    if (a.topic > b.topic) return false; 
    if (a.freq > b.freq) return true; 
    if (a .freq < b.freq) return false; 
    if (a.identifier < b.identifier) return true; 
    return false; 
}

int main() {
    int n;
    cin >> n;
    vector<Article> v = initialize_art_vector(n);
    frecuencia(v); 
    sort(v.begin(), v.end(), cmp); 
    write_art_vector(v);
}