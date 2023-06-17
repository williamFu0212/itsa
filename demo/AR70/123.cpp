#include <iostream>
#include <string>
using namespace std;  

int main() {  
    int i, y;
    char arr[12][10] = {"rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "goat", "monkey", "rooster", "dog", "pig"} ;
    cin >> y;
    // 先減4再取餘數，才會對應到arr的位置
    y = (y - 4) % 12;
    cout << arr[y] << endl;
    // +6後要再%一次，避免y超出12
    y = (y + 6) % 12;
    cout << arr[y] << endl;

    return 0;  
}  