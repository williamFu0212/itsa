#include <iostream>
#include <algorithm>
using namespace std;  

int main() {  
    int i, num, tmp;
    while(cin >> num) {
    	if(num == 1) {
    		cout << "NO" << endl;
    		continue;
		}
		// 找 根號num 是誰 
    	tmp = 2;
    	for(i = 0; i < num; i++) {
    		if(tmp * tmp > num) {
    			break;
			}
			tmp++;
		}
		
		// 確認到跟號num就可以了 
		for(i = 2; i < tmp; i++) {
			if(num % i == 0) {
				cout << "NO" << endl;
				break;
			}
		}
		if(num % i != 0 or num == 2) {
			cout << "YES" << endl;
		}
	}
}