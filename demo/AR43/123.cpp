#include <iostream>
using namespace std;  
  
// t == 1，return bs
// t == 2，return bs * bs
// ...
int f(int bs, int t) {
    if(t == 1) {
        return bs;
    }
    return bs * f(bs, t - 1);

}

int main() {  
    int bs, t;
    while(cin >> bs >> t) {
        cout << f(bs, t) << endl;
    }  
    
    return 0;  
}  