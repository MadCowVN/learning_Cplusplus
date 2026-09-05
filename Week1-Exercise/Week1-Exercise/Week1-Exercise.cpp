#include <iostream>
using namespace std;
int main() {
	int num1, num2, sum;
	cout << "Program to add two numbers\n";
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	sum = num1 + num2;
	cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

	return 0;
}