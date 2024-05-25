#include <iostream>
using namespace std; 


bool is_two_three_balanced(int n) {
    if (n%6 == 0) return is_two_three_balanced(n/6); 
    else if (n%2 != 0 and n%3 != 0) return true; 
    return false;  
}


int main() {
    int n;
    while (cin >> n) {
        if (is_two_three_balanced(n)) cout << "yes";
        else cout << "no";
        cout << endl;
    }
}