#include <iostream>  
using namespace std;  
  
int main() {  
    // 每四年一閏，每百年不閏，每四百年一閏  
    int year, check;  
    while(cin >> year) {  
        check = 0;  
        if (year % 4 == 0) {  
            check = 1;  
        }  
        if (year % 100 == 0) {  
            check = 0;  
        }  
        if (year % 400 == 0) {  
            check = 1;  
        }  
        if (check == 1) {  
            cout << "Bissextile Year" << endl;  
        }  
        else {  
            cout << "Common Year" << endl;  
        }  
    }  
    return 0;  
}  