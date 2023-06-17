#include <iostream>
using namespace std;  

int main() {  
    int i, j, row , col, num;
    cin >> row >> col;
    num = row * col;
    for(i = 0; i < row; i++) {
        cout << num;
        num--;
        for(j = 1; j < col; j++) {
            cout << " " << num;
            num--; 
        }
        cout << endl;
    }

    return 0;  
}  