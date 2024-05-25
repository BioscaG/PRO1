#include <iostream>
using namespace std;

int main() {
    int f, c;
    cin >> f >> c;

    for (int i = 0; i < f; ++i) {
        int num = i;
        bool first_part = false;
        for (int z = 0; z < c; ++z) {
            if (not first_part and num > 0) {
                cout << num%10;
                --num;
            }
            else {
                first_part = true;
                cout << num%10;
                ++num;
            }
        }
        cout << endl;
    }
}



 /*
        while (count < c and num > 0) {
            cout << num%10;
            --num;
            ++count;
        }
        while (count < c) {
            cout << num%10;
            ++count;
        }
    }
}
*/


