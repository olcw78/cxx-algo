#include "selectionSort.h"

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <memory>

using namespace std;

namespace sort {
void run_selectionSort() {
  ::srand(static_cast<unsigned>(time(nullptr)));

  unique_ptr<int[]> arr(new int[ARR_LEN]);
  for (int i = 0; i < ARR_LEN; ++i) {
    arr[i] = ::rand() % 10 + i;
  }

  cout << "before sort --------" << '\n';
  for (int i = 0; i < ARR_LEN; ++i)
    cout << arr[i] << ' ';
  cout << '\n';

  // 1. cur 선택
  // 2. 최소값 얻어 cur 와 교환
  for (int i = 0; i < ARR_LEN - 1; ++i) {
    // 반복하며 최소값 탐색
    int least = i;
    for (int j = i + 1; j < ARR_LEN; ++j) {
      if (arr[least] > arr[j])
        least = j;
    }

    if (i != least) {
      const int temp = arr[i];
      arr[i] = arr[least];
      arr[least] = temp;
    }
  }

  cout << "after sort --------" << '\n';
  for (int i = 0; i < ARR_LEN; ++i)
    cout << arr[i] << ' ';
  cout << '\n';
}
} // namespace sort