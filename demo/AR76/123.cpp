#include <iostream>
using namespace std;  

int main() {  
    int acc[6] = {123, 456, 789, 336, 775, 566};
    int pas[6] = {456, 789, 888, 558, 666, 221};
    int mon[6] = {9000, 5000, 6000, 10000, 12000, 7000};
    int i, j, t, a, p;
    cin >> t;
    for(i = 0; i < t; i++) {
        cin >> a >> p;
        for(j = 0; j < 6; j++) {
            if(a == acc[j] and p == pas[j]) {
                cout << mon[j] << endl;
                break;
            }
        }
        if(j == 6) {
            cout << "error" << endl;
        }
    }

    return 0;  
}  
