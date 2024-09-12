#include <iostream>
#include "MyArray.hpp"

int main() {
    MyNamespace::MyArray<uint, 5> arr{};
    arr.fill(10);

    std::cout << "Front: " << arr.front() << std::endl;
    std::cout << "Back: " << arr.back() << std::endl;

    arr[2] = 20;
    std::cout << "arr[2]: " << arr[2] << std::endl;
    std::cout << "Size: " << arr.size();

    return 0;
}
