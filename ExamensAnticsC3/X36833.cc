#include <iostream>
#include <vector>
using namespace std;

typedef vector<string> Vector; 

int main() {
    int n; 
    cin >> n; 
    for (int i = 0; i < n; ++i) {
        int count = 0; 
        string s;  
        cin >> s; 
        string s_ant = s; 
        while (s != "end") {
            if (s != s_ant and s != "multicolor") ++count; 
            if (s != "multicolor") s_ant = s;  
            cin >> s; 
        }
        cout << count << endl; 
    }
}