#include <iostream>      
using namespace std;      
      
int main() {      
    // 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)     
    int num, i;      
    while(cin >> num) {       
        for(i = 2; i < num; i++) {  
            if(num % i == 0) {  
                break;  
            }  
        }   
        if(i == num) {  
            cout << "YES" << endl;  
        }  
        else {  
            cout << "NO" << endl;  
        }  
    }      
    return 0;      
}