#include <iostream>
using namespace std; 

struct Temps {
    int hora, minut, segon;
};

void un_segon(const Temps& t, Temps& t1, Temps& t2) {
    t1 = t; 
    t2 = t; 
    if (t.segon < 59 and t.segon > 0) {
        t1.segon += 1; 
        t2.segon -= 1; 
    }
    else if (t.segon < 59) {
        t1.segon += 1; 
        if (t.minut > 0) {
            t2.minut -= 1; 
            t2.segon = 59; 
        }
        else {
            if (t.hora > 0) {
                t2.hora -= 1; 
                t2.minut = 59; 
                t2.segon = 59; 
            }
            else {
                t2.hora = 23; 
                t2.minut = 59; 
                t2.segon = 59; 
            }
        }
    }
    else {
        t2.segon -= 1; 
        if (t1.minut < 59) {
            t1.segon = 0; 
            t1.minut += 1; 
        }
        else {
            if (t1.hora < 23) {
                t1.hora += 1; 
                t1.segon = 0; 
                t1.minut = 0; 
            }
            else {
                t1.hora = 0; 
                t1.segon = 0; 
                t1.minut = 0; 
            }
        }
    }
}

int main() {
    Temps n;  
    while (cin >> n.hora >> n.minut >> n.segon) {
        Temps t1, t2; 
        un_segon(n, t1, t2); 
        cout << t1.hora << ' ' << t1.minut << ' ' << t1.segon << endl; 
        cout << t2.hora << ' ' << t2.minut << ' ' << t2.segon << endl; 
    }
}