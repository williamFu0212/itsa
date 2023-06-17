#include <iostream>
#include <string>
using namespace std;  

int main() {  
    int i, h, m;
    char arr[12][10] = {"rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "goat", "monkey", "rooster", "dog", "pig"} ;
    cin >> h >> m;
    if (h == 23 or h == 0) {
        cout << arr[0] << endl;
    }
    else {
    	for(i = 1; i < 24; i += 2) {
    		if(h == i or h == i + 1) {
    			cout << arr[(i + 1) / 2] << endl;
			}
		}
	}

    return 0;  
}  