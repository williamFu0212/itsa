#include <iostream>     
using namespace std;      
      
int main() {      
    int num, i;
    while(cin >> num) {
        if(num % 2 == 0) {
            cout << "even" << endl;
        } 
        else {
            cout << "odd" << endl;
        }
    }
    return 0;      
}