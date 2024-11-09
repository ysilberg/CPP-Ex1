#include "Queue.h"
#include <stdlib.h>
#include <stdio.h>  

// Initializes the queue with the specified size
// Input: q pointer, unsigned int size
void initQueue(Queue *q, unsigned int size)
{
  q->data = (unsigned int *)malloc(size * sizeof(unsigned int));
  q->size = size;
  q->front = 0;
  q->rear = 0;
  q->count = 0;
}

// Cleans up the queue and frees the allocated memory
// Input: q pointer
void cleanQueue(Queue *q)
{
  free(q->data);
  q->data = NULL;
  q->size = 0;
  q->front = 0;
  q->rear = 0;
  q->count = 0;
}

// Adds a new value to the queue
// Input: q pointer, unsigned int newValue
void enqueue(Queue *q, unsigned int newValue)
{
  if (isFull(q))
  {
    printf("Queue is full! Cannot enqueue.\n");
    return;
  }
  q->data[q->rear] = newValue;
  q->rear = (q->rear + 1) % q->size; 
  q->count++;
}

// Removes and returns the front element from the queue
// Input: q pointer
// value variable
int dequeue(Queue *q)
{
  if (isEmpty(q))
  {
    printf("Queue is empty! Cannot dequeue.\n");
    return -1;
  }
  int value = q->data[q->front];
  q->front = (q->front + 1) % q->size; 
  q->count--;
  return value;
}

// Checks if the queue is empty
// Input: q pointer
// Output: True or False
bool isEmpty(Queue *q)
{
  return q->count == 0;
}

// Checks if the queue is full
// Input: q pointer
// Output: True or False
bool isFull(Queue *q)
{
  return q->count == q->size;
}
