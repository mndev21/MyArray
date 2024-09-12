#pragma once

#include <iostream>

namespace MyNamespace {

template<typename T, std::size_t N>
class MyArray {
private:
    T data[N];
public:
    const std::size_t size() const;

    T &operator[](std::size_t index);

    const T &operator[](std::size_t index) const;

    void fill(const T &value);

    T &front();

    T &back();
};

template <typename T, std::size_t N>
T& MyArray<T, N>::front() {
    return data[0];
}

template <typename T, std::size_t N>
T& MyArray<T, N>::back() {
    return data[N - 1];
}

template <typename  T, std::size_t N>
void MyArray<T, N>::fill(const T &value) {
    for (std::size_t i = 0; i < N; ++i) {
        data[i] = value;
    }
}

template <typename T, std::size_t N>
const T& MyArray<T, N>::operator[](std::size_t index) const {
    return data[index];
}

template <typename T, std::size_t N>
T& MyArray<T, N>::operator[](std::size_t index) {
    return data[index];
}

template <typename T, std::size_t N>
const std::size_t MyArray<T, N>::size() const {
    return N;
}

}