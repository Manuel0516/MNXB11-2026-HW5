/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
	
	// Exercise 1.1
	int a = 1;
	int b = 2;
	int c = 3;

	swap_ptr(&a, &b, &c);

	std::cout << "After swap:  " << a << " " << b << " " << c << "\n";

	// Exercise 1.2
	UniqueData number{5};
	std::cout << "Initial value: " << number.get() << "\n";
	
	number.set(10);

	std::cout << "Updated value: " << number.get() << "\n";
	
	return 0;
	
}

