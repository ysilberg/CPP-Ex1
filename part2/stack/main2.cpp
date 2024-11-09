#include "Stack.h"
#include <iostream>

int main() {
  Stack s;
  initStack(&s);

  std::cout << "Pushing elements onto the stack: 10, 20, 30" << std::endl;
  push(&s, 10);
  push(&s, 20);
  push(&s, 30);

  std::cout << "Popping elements from the stack:" << std::endl;
  std::cout << "Popped: " << pop(&s) << std::endl; // Should print 30
  std::cout << "Popped: " << pop(&s) << std::endl; // Should print 20
  std::cout << "Popped: " << pop(&s) << std::endl; // Should print 10

  // Try popping from an empty stack
  std::cout << "Trying to pop from an empty stack:" << std::endl;
  std::cout << "Popped: " << pop(&s) << std::endl; // Should print -1

  cleanStack(&s);
  return 0;
}
