#include <iostream>

void swapPtr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int x = 10;
	int y = 20;
	swapPtr(&x, &y);
	std::cout << "x: " << x << ", y: " << y << std::endl;
	return 0;
}
