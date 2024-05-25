#include <iostream>
using namespace std;

int main() {
    int h, m, d, m_d;
    cin >> h >> m >> d;
    m_d = m + d;
        while (m_d > 59) {
            if (h == 23) h = 0;
            else ++h;
            m_d -= 60;
        }
    cout << h/10 << h%10 << ':' << m_d/10 << m_d%10 << endl;
}

