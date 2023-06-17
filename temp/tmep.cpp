#include <iostream>
#include <algorithm>
using namespace std;  

int main() {  
    int i, num;
    while(cin >> num){
    	cout << 1;
    	for(i = 2; i <= num; i++) {
    		if(num % i == 0) {
    			cout << " " << i;
			}
		}
		cout << endl;
	}
    	
}
