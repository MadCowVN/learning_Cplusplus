#include <iostream>
#include <algorithm>   // std::sort


bool decreasing(int a, int b) { return a > b; }

int main() {
    int a[5] = { 5, 2, 8, 1, 9 };

    std::sort(a, a + 5);              // increasing -> 1 2 5 8 9
    std::sort(a, a + 5, decreasing);     // comparator functions 

    // comparator - LAMBDA
    std::sort(a, a + 5, [](int x, int y) { return x > y; });  // 9 8 5 2 1

    for (int i = 0; i < 5; i++) std::cout << a[i] << " ";
    return 0;
}
