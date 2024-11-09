#include "Stack.h"
#include <iostream>

// Initialize the stack
// Input: stack pointer s
void initStack(Stack* s) 
{
  initList(s->list);
}

// Clean up the stack
// Input: stack pointer s
void cleanStack(Stack* s) 
{
  cleanList(s->list);
}

// Push a new element onto the stack
// Input: stack pointer s and unsigned int element
void push(Stack* s, unsigned int element)
{
  if (element <= 0) {
    std::cout << "Only positive integers are allowed!" << std::endl;
    return;
  }
  add(s->list, element); 
}

// Pops the top element from the stack
// Input: stack pointer s
// Output: value variable
int pop(Stack* s) 
{
  if (isEmpty(s)) 
  {
    std::cout << "Stack is empty. Cannot pop." << std::endl;
    return -1;
  }

  
  int value = s->list.head->data;
  remove(s->list); 
  return value;
}

// Check if the stack is empty
// Input: stack pointer s
// Output: True or False
bool isEmpty(Stack* s) 
{
  return s->list.head == nullptr;
}

// Check if the stack is full (always returns false since it's dynamic)
// Input: stack pointer s
// Output: True or False
bool isFull(Stack* s) 
{
  return false;
}
