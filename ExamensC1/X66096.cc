#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int any;
    double co2;
    string activitat;
    cin >> any >> co2 >> activitat;
    double porcentaje;
    if (activitat == "making things") porcentaje = 31.0/100;
    else if (activitat == "pluggin in") porcentaje = 27.0/100;
    else if (activitat == "growing things") porcentaje = 19.0/100;
    else if (activitat == "getting around") porcentaje = 16.0/100;
    else porcentaje = 7.0/100;
    cout << activitat << " produced " << porcentaje*co2 << " CO2 Gt in " << any << endl;
}
