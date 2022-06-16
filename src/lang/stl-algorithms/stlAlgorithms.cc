#include "stlAlgorithms.h"

#include <iostream>
#include <iterator>
#include <vector>

#include <algorithm>

using namespace std;

namespace lang {
void run_sortPrac() {
  vector<int> v;
  v.push_back(5);
  v.push_back(3);
  v.push_back(1);
  v.push_back(6);
  v.push_back(4);
  v.push_back(7);
  v.push_back(2);

  cout << "정렬 전 ---- " << '\n';
  print_container(begin(v), end(v));

  sort(begin(v), end(v));

  cout << "정렬 후 ---- " << '\n';
  print_container(begin(v), end(v));
}
} // namespace lang
