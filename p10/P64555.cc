#include <iostream>
#include <vector>
#include <cmath>
using namespace std; 


struct Punt {
    int x; 
    int y; 
    int dist; 
}; 

int dist_punts(Punt p1, Punt p2) {
    int dist = 0; 
    dist += abs(p1.x - p2.x); 
    dist += abs(p1.y - p2.y);
    return dist; 
}

int main() {
    Punt p; 
    int n;
    cin >> p.x >> p.y >> n; 
    for (int i = 0; i < n; ++i) {

    }
}

