#include <iostream>
using namespace std;

int main() {
	int a, now = 1, bef = 1, temp, i;
	cin >> a;
	
	if (a <= 2) {
		cout << 1;
	}
	else {
		for(i = 2; i < a; i++) {
			temp = now;
			now += bef;
			bef = temp;
		}
	}
	cout << now;
	
    return 0;
}
