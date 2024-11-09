#include "Utils.h"
#include "../stack/Stack.h"
#include <iostream>

using namespace std;

// Function to reverse the elements of an array using a stack
// Input: int pointer nums, unsigned int size
void reverse(int* nums, unsigned int size) 
{
  Stack stack;
  initStack(&stack);


  for (unsigned int i = 0; i < size; ++i) 
  {
    push(&stack, nums[i]);
  }


  for (unsigned int i = 0; i < size; ++i) 
  {
    nums[i] = pop(&stack);
  }

  cleanStack(&stack); 
}

// Function to get 10 integers from the user and return them in reverse order
// Output: nums variable
int* reverse10()
{
  int* nums = new int[10];

  std::cout << "Please enter 10 integers:" << std::endl;


  for (int i = 0; i < 10; ++i) 
  {
    std::cin >> nums[i];
  }

  reverse(nums, 10);


  return nums;
}
