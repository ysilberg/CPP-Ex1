#include "Utils.h"
#include <iostream>

int main() {
  int nums[] = {1, 2, 3, 4, 5};
  unsigned int size = sizeof(nums) / sizeof(nums[0]);

  std::cout << "Original array: ";
  for (unsigned int i = 0; i < size; ++i) {
    std::cout << nums[i] << " ";
  }
  std::cout << std::endl;

  // Reverse the array using the stack
  reverse(nums, size);

  std::cout << "Reversed array: ";
  for (unsigned int i = 0; i < size; ++i) {
    std::cout << nums[i] << " ";
  }
  std::cout << std::endl;

  // Testing the reverse10 function
  int* reversedArray = reverse10();

  std::cout << "Reversed array:" << std::endl;
  for (int i = 0; i < 10; ++i) {
    std::cout << reversedArray[i] << " ";
  }
  std::cout << std::endl;

  // Free the dynamically allocated memory
  delete[] reversedArray;

  return 0;
}
