#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

// Node structure representing each element in the linked list
struct Node 
{
  int data;          
  Node* next;         
};

// Linked list structure
struct LinkedList 
{
  Node* head;        
};

// Function declarations
void initList(LinkedList& list);
void add(LinkedList& list, int value);
bool remove(LinkedList& list);
bool isEmpty(const LinkedList& list);
void printList(const LinkedList& list);
void cleanList(LinkedList& list);

#endif // LINKEDLIST_H
