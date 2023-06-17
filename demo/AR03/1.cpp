#include <iostream>
using namespace std;

int main() {
    int i, arr[6], tot = 0;
    // 一輸入就將立方加進去
    for (i = 0; i < 6; i++) {
        cin >> arr[i];
        tot = tot + arr[i] * arr[i] * arr[i];
    }
    cout << tot << endl;

    return 0;
}