#include <iostream>
using namespace std;

int main() {
	unsigned long int num, i, res;
	while (cin >> num) {
		res = 0;
		for(i = 3; i <= num; i = i + 3) {
			res += i;
		}
		cout << res << endl;
	}
	
    return 0;
}