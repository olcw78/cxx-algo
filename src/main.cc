#include <iostream>

#include "ds/single-linked-list/singleLinkedList.h"

using namespace std;

int main() {
  ds::SingleLinkedList<int> sll;

  sll.push_back(1);
  sll.push_back(2);
  sll.push_back(3);
  sll.push_back(10);
  sll.push_back(20);
  sll.push_back(30);
  sll.push_back(100);
  sll.pop_back();

  sll.print_all();

  return 0;
}