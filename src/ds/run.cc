#include "single-linked-list/singleLinkedList.h"

namespace ds {
void run() {
  ds::SingleLinkedList<int> sll;

  sll.push_back(1);
  sll.push_back(2);
  sll.push_back(3);
  sll.push_back(10);
  sll.push_back(20);
  sll.push_back(30);
  sll.push_back(100);

  sll.pop_back();
  sll.pop_back();
  sll.pop_back();

  sll.push_back(-10);
  sll.push_back(static_cast<int>(-0.2));

  sll.print_all();
}
} // namespace ds
