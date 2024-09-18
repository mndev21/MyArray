#include <iostream>
#include "MyArray.hpp"

int main() {
    MyNamespace::MyArray<int, 5> arr = {};
    const MyNamespace::MyArray<float, 10> arr0 = {};
    arr.fill(10);

    std::cout << "Front: " << arr.front() << std::endl;
    std::cout << "Back: " << arr.back() << std::endl;

    arr.front() = 4;
    arr[2] = 10;
    arr0[0] = 4.8;
    std::cout << "arr[2]: " << arr[2] << ' ' << arr0[0] << std::endl;
    std::cout << "Size: " << arr.size();

    return 0;
}
