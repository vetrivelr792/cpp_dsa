#include "array.hpp"

#include <iostream>

void printArray(const std::vector<int> &arr) {
  for (int value : arr)
    std::cout << value << ' ';

  std::cout << '\n';
}