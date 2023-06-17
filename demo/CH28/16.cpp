#include <iostream>
using namespace std;

int main() {
    //用bubble做三次
	int i ,t, m, d;
    cin >> t;
    for(i = 0; i < t; i++) {
        cin >> m >> d;
        if (m == 3 and d >= 21 or m == 4 and d <= 19) {
            cout << "Aries" << endl;
        }
        else if (m == 3 and d >= 21 or m == 4 and d <= 19) {
            cout << "Aries" << endl;
        }
        else if (m == 4 and d >= 20 or m == 5 and d <= 20) {
            cout << "Taurus" << endl;
        }else if (m == 5 and d >= 21 or m == 6 and d <= 21) {
            cout << "Gemini" << endl;
        }else if (m == 6 and d >= 22 or m == 7 and d <= 22) {
            cout << "Cancer" << endl;
        }else if (m == 7 and d >= 23 or m == 8 and d <= 22) {
            cout << "Leo" << endl;
        }else if (m == 8 and d >= 23 or m == 9 and d <= 22) {
            cout << "Virgo" << endl;
        }else if (m == 9 and d >= 23 or m == 10 and d <= 23) {
            cout << "Libra" << endl;
        }else if (m == 10 and d >= 24 or m == 11 and d <= 22) {
            cout << "Scorpio" << endl;
        }else if (m == 11 and d >= 23 or m == 12 and d <= 21) {
            cout << "Sagittarius" << endl;
        }else if (m == 12 and d >= 22 or m == 1 and d <= 19) {
            cout << "Capricorn" << endl;
        }else if (m == 1 and d >= 20 or m == 2 and d <= 18) {
            cout << "Aquarius" << endl;
        }else if (m == 2 and d >= 19 or m == 3 and d <= 20) {
            cout << "Pisces" << endl;
        }
    }
    return 0;
}