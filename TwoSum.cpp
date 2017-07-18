//Conor Kennedy
//7/17/17

/*
Given an array of integers, return indices of the two numbers
such that they add up to a specific target.

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return[0, 1]
*/

#include <iostream>
using namespace std;

int main() {

	int arr[4] = { 2, 7, 11, 15 };
	int target = 9;
	
	for (int i = 0; i < 4; ++i) {
		for (int j = i + 1; j < 4; j++)
			if (arr[i] + arr[j] == target) {
				cout << "[" << i << ", " << j << "]\n";
				}
	}
}
