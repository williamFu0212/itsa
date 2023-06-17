#include <iostream>  
using namespace std;  
  
int main() {  
    int i, arr[6], tot = 0;  
    for (i = 0; i < 6; i++) {  
        cin >> arr[i];  
    }  
    cout << arr[5];  
    for(i = 4; i >= 0; i--) {  
        cout << " " << arr[i];  
    }  
    cout << endl;  
  
    return 0;  
}  