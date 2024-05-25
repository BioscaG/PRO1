#include <iostream>
using namespace std;


void read_rational(int& num, int& den) {

    for (int i = 0; i < num; ++i) {
        while (num%i == 0) num/i;
