#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {
    return((any%4 == 0 and any%100 != 0) or (any%100 == 0 and(any/100)%4 == 0));
}
bool es_data_valida(int d, int m, int a) {
    if ((a >= 1800 and a <= 9999) and (m >= 1 and m <= 12) and (d >= 1 and d <= 31)) {
        if (m == 4 or m == 6 or m == 9 or m == 11) return(d <= 30);
        else if (m != 2) return(d <= 31);
        else {
            if (es_any_de_traspas(a)) return(d <= 29);
            else return(d <= 28);
        }
    }
    else return false;
}
