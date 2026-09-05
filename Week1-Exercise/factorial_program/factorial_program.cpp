#include <iostream>
int main() {
	int n;
	std::cout << "Enter a non-negative integer: ";
	std::cin >> n;

	long long factorialResult = 1;
	for (int i = 1; i <= n; ++i) {
		factorialResult *= i;
	}
	std::cout << n << "! = " << factorialResult << std::endl;
	return 0;
}