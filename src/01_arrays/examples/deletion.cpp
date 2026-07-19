#include "array.hpp"

#include <vector>

int main() {
  std::vector<int> arr{1, 2, 3, 4};

  arr.pop_back();

  printArray(arr);

  return 0;
}