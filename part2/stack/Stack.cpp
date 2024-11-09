#include "Stack.h"
#include <iostream>

// Initialize the stack
void initStack(Stack* s) {
  initList(s->list);
}

// Clean up the stack
void cleanStack(Stack* s) {
  cleanList(s->list);
}

// Push a new element onto the stack
void push(Stack* s, unsigned int element) {
  if (element <= 0) {
    std::cout << "Only positive integers are allowed!" << std::endl;
    return;
  }
  add(s->list, element); // Use the linked list 'add' function to push onto the stack
}

// Pop the top element from the stack
int pop(Stack* s) {
  if (isEmpty(s)) {
    std::cout << "Stack is empty. Cannot pop." << std::endl;
    return -1;
  }

  // The 'remove' function removes the top element, so we need to retrieve its value before removing it
  int value = s->list.head->data;
  remove(s->list); // Use the linked list 'remove' function to pop the top element
  return value;
}

// Check if the stack is empty
bool isEmpty(Stack* s) {
  return s->list.head == nullptr;
}

// Check if the stack is full (always returns false since it's dynamic)
bool isFull(Stack* s) {
  return false;
}