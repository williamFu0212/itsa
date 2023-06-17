#include <iostream>
#include <algorithm>
using namespace std;  

int main() {  
    int m, n, i, tot = 0;
    cin >> m >> n;
    if(n == 0) {
    	cout << 0 << endl;
    	return 0;
	}
    for(i = 0; i <= m; i++) {
    	if(i * i % n == 0) {
    		tot += i * i;
		}
	}
	cout << tot << endl;
	
    return 0;  
}  