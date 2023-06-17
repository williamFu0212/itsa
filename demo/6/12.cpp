#include <iostream>    
using namespace std;    
    
int main() {    
    // 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)   
    int m;    
    while(cin >> m) {     
        if (3 <= m and m <= 5) {    
            cout << "Spring" << endl;      
        }    
        else if (6 <= m and m <= 8) {    
            cout << "Summer" << endl;        
        }    
        else if (9 <= m and m <= 11) {    
            cout << "Autumn" << endl;       
        }    
        else {    
            cout << "Winter" << endl;      
        }     
    }    
    return 0;    
} 