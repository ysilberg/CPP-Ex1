#include "LinkedList.h"

int main() {
  LinkedList list;
  initList(list);

  std::cout << "Adding elements to the list..." << std::endl;
  add(list, 10);
  add(list, 20);
  add(list, 30);
  printList(list);

  std::cout << "Removing an element from the list..." << std::endl;
  remove(list);
  printList(list);

  std::cout << "Removing all elements..." << std::endl;
  cleanList(list);
  printList(list);

  return 0;
}
