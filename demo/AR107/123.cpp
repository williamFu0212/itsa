#include <iostream>
using namespace std;  

int main() {  
    int i, arr[9];
    for(i = 0; i < 9; i++) {
    	cin >> arr[i];
	}
	cout << arr[0] * (arr[4] * arr[8] - arr[5] * arr[7]) - arr[1] * (arr[3] * arr[8] - arr[5] * arr[6]) + arr[2] * (arr[3] * arr[7] - arr[4] * arr[6]) << endl;

    return 0;  
}  