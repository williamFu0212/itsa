#include <iostream>
using namespace std;

int main() {
	unsigned long int a, b, res, i;
	while (cin >> a >> b) {
		res = 0;
		for(i = a; i <= b; i++) {
			res += i;
		}
		cout << res << endl;
	}
	
    return 0;
}