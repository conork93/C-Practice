// Conor Kennedy
//7/21/17

// Reverse digits of an integer.
//Example1: x = 123, return 321
//Example2 : x = -123, return -321

#include <iostream>
using namespace std;

int reverse(int x) {
	int rev = 0;
	while (x) {
		int temp = rev * 10 + x % 10;
		rev = temp;
		x /= 10;
	}
	return rev;
}


int main() {

	int x = -54321;
	int ans;
	ans = reverse(x);

	cout << ans << endl;

	return 0;
		
}
