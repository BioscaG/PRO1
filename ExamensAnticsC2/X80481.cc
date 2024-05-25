#include <iostream>
using namespace std; 

int main() {
    int n; 
    cin >> n; 
    for (int i = 0; i < n; ++i) {
        int m, m_min; 
        int count = 0; 
        bool primera_condicio = true; 
        cin >> m; 
        m_min = m; 
        while (m != 0) {
            if (m < m_min) {
                primera_condicio = true; 
                m_min = m; 
            }
            else if (m > m_min and primera_condicio) {
                ++count; 
                primera_condicio = false; 
            }
            else primera_condicio = false; 
            cin >> m; 
        }   
        cout << count << endl; 
    }
}