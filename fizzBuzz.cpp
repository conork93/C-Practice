//Conor Kennedy
//8/7/17

/*
FizzBuzz
Print 1 - 100
For multiples of three, print "Fizz"
instead of the number and "Buzz" if the number is a multiple
of five.For multiples of both three and five, the
program will print "FizzBuzz"
*/

#include <iostream>

int main() {

	for (int i = 1; i < 101; ++i) {
		if (i % 3 == 0)
			if (i % 5 == 0)
				std::cout << "FizzBuzz\n";
			else
				std::cout << "Fizz\n";
		if (i % 5 == 0)
			std::cout << "Buzz\n";
		else
			std::cout << i << "\n";
	}
}
