#include <iostream>
#include <algorithm>
using namespace std;  

int main() {  
    int i, num, tot;
    while(cin >> num){
    	tot = 0;
    	for(i = 6; i <= num; i++) {
    		if(i % 2 == 0 and i % 3 == 0 and i % 12 != 0) {
    			tot += i;
			}
		}
		cout << tot << endl;
	}
    	
}