#include <iostream>   
#include <algorithm>   
using namespace std;      
      
int main() {      
    // 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)     
    int num, i;
    cin >> num;
    int arr[num];
    for(i = 0; i < num; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + num);
    for(i = 0; i < num; i++) {
        cout << arr[i] << endl;
    }

    return 0;      
}