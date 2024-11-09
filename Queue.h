#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h> // For using the bool type

/* A queue contains positive integer values. */
typedef struct Queue
{
	unsigned int *data; 
	unsigned int size;	
	unsigned int front; 
	unsigned int rear;	
	unsigned int count; 
} Queue;

// Function prototypes
void initQueue(Queue *q, unsigned int size);
void cleanQueue(Queue *q);

void enqueue(Queue *q, unsigned int newValue);
int dequeue(Queue *q); 

bool isEmpty(Queue *q);
bool isFull(Queue *q);

#endif 
