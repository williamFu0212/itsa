#include <iostream>
#include <algorithm>
using namespace std;  

int main() {  
    int i, num, baseline;
    cin >> num >> baseline;
    int arr[num + 1], temp, tot;
    for(i = 0; i < num; i++) {
    	cin >> arr[i];
	}
	// 讓下面的迴圈一定會在最後面跑不一樣的判斷 
	arr[num] = 10000000;
	
	// 先sort，再按照順序看，下一個跟這次的數字有沒有一樣，一樣則數量加一，不一樣就輸出並且開始新數字的計算 
	sort(arr, arr + num);
	temp = arr[0];
	tot = 1;
	for(i = 1; i < num + 1; i++) {
		if(arr[i] == temp) {
			tot += 1;
		}
		else { 
			if(tot >= baseline) {
				cout << temp << "," << tot << endl;	
			}
			tot = 1;
			temp = arr[i];
		}
	}
	
    return 0;  
}  