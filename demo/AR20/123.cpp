#include <iostream>  
#include <algorithm>
using namespace std;  
  
int main() {  
    // 先sort，再依次幾查是否下一個相同，相同則跳出迴圈，若都不同則 i == t- 1
    int i, t;  
    cin >> t;  
    int arr[t];  
    for(i = 0; i <= t; i++) {  
        cin >> arr[i];  
    }  

    sort(arr, arr + t);
    for(i = 0; i < t - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            break;
        }
    }
    if(i == t - 1) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
      
  
    return 0;  
}  