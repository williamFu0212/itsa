#include <iostream>
using namespace std;

int main() {
    //用bubble做三次
	int i, j, arr[3], temp;
    cin >> arr[0] >> arr[1] >> arr[2];
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            if(arr[j] < arr[j + 1]) {
                // SWAP
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << arr[0] << ">" << arr[1] << ">" << arr[2] << endl;
    return 0;
}