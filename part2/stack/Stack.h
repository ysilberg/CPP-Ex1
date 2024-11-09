#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* A positive-integer value stack, with no size limit */
typedef struct Stack {
  LinkedList list;  // Use a linked list to implement the stack
} Stack;

// Function declarations
void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is empty

void initStack(Stack* s);
void cleanStack(Stack* s);

bool isEmpty(Stack* s);
bool isFull(Stack* s); // Since stack has no size limit, always returns false

#endif // STACK_H
