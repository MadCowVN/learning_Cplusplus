
//int main() {
//    int a[5] = { 10, 20, 30, 40, 50 };
//
//    std::cout << "The address of a[0]: " << &a[0] << "\n";
//    std::cout << "The name of the array a: " << a << "\n";  // &a[0]
//    std::cout << "*a = " << *a << "\n";                     // 10 
//    return 0;
//}
//int a[5] = { 10, 20, 30, 40, 50 };
//int* p = a;                    // p trỏ a[0]
//
//for (int i = 0; i < 5; i++) {
//    cout << *p << " ";         // in giá trị p đang trỏ
//    p++;                        // nhích con trỏ sang phần tử kế
//}
//// Kết quả: 10 20 30 40 50
#include <iostream>

// int* a nhận địa chỉ phần tử đầu; n là số phần tử
int sum(int* a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(a + i);      // == a[i]
    }
    return sum;
}

int main() {
    int score[5] = { 8, 9, 7, 10, 6 };
    std::cout << "Sum " << sum(score, 5) << "\n";   // Sum = 40
    return 0;
}

