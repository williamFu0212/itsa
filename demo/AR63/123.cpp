#include <iostream>
#include <string>
using namespace std;  

int main() {  
    int x1, x2, y1, y2, i, j, tmp;
    // 建立第一個matric
    cin >> x1 >> y1;
    int mat1[x1][y1];
    for(i = 0; i < x1; i++) {
        for(j = 0; j < y1; j++) {
            cin >> mat1[i][j];
        }
    }
    // 直接讀第二個的值，加進第一個第一個matrix的對應位置
    cin >> x2 >> y2;
    for(i = 0; i < x2; i++) {
        for(j = 0; j < y2; j++) {
            cin >> tmp;
            mat1[i][j] += tmp;
        }
    }
    for(i = 0; i < x2; i++) {
		cout << mat1[i][0];
        for(j = 1; j < y2; j++) {
            cout << " " << mat1[i][j];
        }
        cout << endl;
    }

    
    return 0;  
}  