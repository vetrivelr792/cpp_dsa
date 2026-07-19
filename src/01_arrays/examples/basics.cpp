#include <iostream>

int main() {

  int n;

  std::cout << "Enter the size of array: ";
  std::cin >> n;

  int A[n];

  A[0] = 100;

  int i = 0;
  for (int x : A) {

    std::cout << i++ << " " << x << std::endl;
  }

  return 0;
}