#include "LinkedList.h"

// Initializes the linked list
//Input : list variable from Linkedlist
void initList(LinkedList& list) {
  list.head = nullptr; // Start with an empty list
}

// Adds a new element to the top of the list
//Input : list variable from Linkedlist, int value
void add(LinkedList& list, int value) {
  if (value <= 0) {
    std::cout << "Only positive integers are allowed!" << std::endl;
    return;
  }
  Node* newNode = new Node;
  newNode->data = value;
  newNode->next = list.head; // New node points to the current head
  list.head = newNode;       // Update head to the new node
}

// Removes the top element from the list
//Input : list variable from Linkedlist
//Output: True or false
bool remove(LinkedList& list) {
  if (isEmpty(list)) {
    std::cout << "List is empty. Cannot remove element." << std::endl;
    return false;
  }
  Node* temp = list.head;
  list.head = list.head->next; // Update head to the next element
  delete temp; // Free the memory of the removed node
  return true;
}

// Checks if the list is empty
//Input : list variable from Linkedlist
//Output: True or false
bool isEmpty(const LinkedList& list) {
  return list.head == nullptr;
}

// Prints all elements in the list
//Input : list variable from Linkedlist
void printList(const LinkedList& list) {
  if (isEmpty(list)) {
    std::cout << "List is empty." << std::endl;
    return;
  }
  Node* current = list.head;
  std::cout << "List elements: ";
  while (current != nullptr) {
    std::cout << current->data << " ";
    current = current->next;
  }
  std::cout << std::endl;
}

// Cleans up the list and frees all allocated memory
//Input : list variable from Linkedlist
void cleanList(LinkedList& list) {
  while (!isEmpty(list)) {
    remove(list);
  }
}
