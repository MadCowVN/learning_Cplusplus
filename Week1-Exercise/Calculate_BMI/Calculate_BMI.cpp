#include <iostream>

int main() {
	double weight, height;
	std::cout << "Enter your weight in kilograms: ";
	std::cin >> weight;
	std::cout << "Enter your height in meters: ";
	std::cin >> height;

	if (height <= 0) {
		std::cerr << "Height must be greater than zero." << std::endl;
		return 1;
	}
	double bmi = weight / (height * height);
	std::cout << "Your BMI is: " << bmi << std::endl;
	return 0;
}