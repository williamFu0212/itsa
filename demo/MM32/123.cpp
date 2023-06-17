#include <iostream>
#include <algorithm>
using namespace std;  

int main() {  
    int i, num, tot, tmp;
    while(cin >> num){
    	tmp = num;
    	tot = 0;
    	while(num > 0) {
    		tot += (num % 10) * (num % 10) * (num % 10);
    		num /= 10;
		}
		if(tot == tmp) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
		
	}
    	
}