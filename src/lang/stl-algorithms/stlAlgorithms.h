#ifndef D6954C71_D9FA_466B_AB3E_A8F466BB08AB
#define D6954C71_D9FA_466B_AB3E_A8F466BB08AB

#include <iostream>
namespace lang {
template <typename T> void print_container(T begin, T end) {
  while (begin != end) {
    std::cout << *begin << '\n';
    ++begin;
  }
  std::cout << '\n';
}

void run_sortPrac();
// class stlAlgorithms final {};
} // namespace lang

#endif /* D6954C71_D9FA_466B_AB3E_A8F466BB08AB */
