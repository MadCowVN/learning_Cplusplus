#include <iostream>

int main() {
	double a, b;
	std::cout << "Enter coefficients a and b for the linear equation ax + b = 0: ";
	std::cin >> a >> b;

	if (a != 0) {
		double x = -b / a;
		std::cout << "The solution is x = " << x << std::endl;

	}
	else { 
		if ( b == 0 ) {
			std::cout << "The equation has infinitely many solutions." << std::endl;
		}
		else {
			std::cout << "The equation has no solution." << std::endl;
		}
	}
}