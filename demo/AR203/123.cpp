#include <iostream>
#include <algorithm>
using namespace std;  

int main() {  
    int i, num, tmp;
    char arr[9][20] = {"1 Mercury", "2 Venus","3 Earth","4 Mars","5 Juputer","6 Saturn","7 Uranus","8 Neptunus","9 Pluto"};
    cin >> num;
    for(i = 0; i < num; i++) {
    	cin >> tmp;
    	cout << arr[tmp - 1] << endl;
	}
    
	
    return 0;  
}  