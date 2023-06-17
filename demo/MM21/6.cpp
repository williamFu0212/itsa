#include <iostream>  
using namespace std;  
  
int main() {  
    unsigned long int a, i, res;  
    while (cin >> a) {  
        res = 1;  
        for(i = 2; i <= a; i++) {  
            res *= i;  
        }  
        cout << res << endl;  
    }  
      
    return 0;  
}  