#include "array.hpp"

#include <vector>

int main() {
  std::vector<int> arr{1, 2, 3};

  arr.push_back(4);

  printArray(arr);

  return 0;
}