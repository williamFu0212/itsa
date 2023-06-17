#include <iostream>
#include <string>
using namespace std;  

int main() {  
    char s, tmp_char;
    int i, tmp_int, t, arr[26];
    cin >> t;
    // 初始化arr 
    for(i = 0; i < 26; i++) {
		arr[i] = 0;
	}
	// 建立arr(0-26代表a-z) 
    for(i = 0; i < t; i++) {
    	cin >> s;
    	tmp_int = (int)s;
    	arr[tmp_int - 97] += 1;
	}
	// 輸出不為arr[i] != 0的字母和數量 
	for(i = 0; i < 26; i++) {
		if(arr[i] != 0) {
			tmp_char = (char)(i + 97);
			cout << tmp_char << " "  << arr[i] << endl; 
		}
	}
    
    return 0;  
}  