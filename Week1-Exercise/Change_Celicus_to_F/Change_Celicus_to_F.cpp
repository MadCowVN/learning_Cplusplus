#include <iostream>

int main() {
    double celsius, fahrenheit;
    std::cout << "Program to convert Celsius to Fahrenheit\n";
	std::cout << "Enter temperature in Celsius: ";
	std::cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}