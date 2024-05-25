#include <iostream>
#include <cmath> 
using namespace std; 

double distancia(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)); 
}

void write(string trajecte, double distancia){
    cout << "Trajecte " << trajecte << ": " << distancia << endl; 
}

int main() {
    string s; 
    while (cin >> s) {
        double dist = 0; 
        double x1, y1, x2, y2; 
        cin >> x1 >> y1; 
        while (cin >> x2 >> y2) {
            dist += distancia(x1, y1, x2, y2); 
            x1 = x2; 
            y1 = y2; 
        }
        write(s, dist); 
    }
}