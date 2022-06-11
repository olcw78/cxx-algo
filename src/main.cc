// #include "prob/comon/ch1/ch1.h"
#include "data-structure/linear/linkedList/singleLinkedList/singleLinkedList.h"

#include <iostream>

using namespace std;

int main()
{
    //    // 1.
    //    const int max = prob::get_max(5, 6);
    //    cout << "max is " << max << '\n';
    //
    //    // 2.
    //    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    //    const int sum1 = prob::get_sum(arr, 11);
    //    cout << "sum is " << sum1 << '\n';
    //
    //    // 3.
    //    int arr2[5]={1, 5, 9, 22, -214};
    //    const int max2 = prob::get_max_arr(arr2, 5);
    //    cout << "max of the array is " << max2 << '\n';

    ds::SingleLinkedList<int> sll;

    sll.push_back(1);
    sll.push_back(2);
    sll.push_back(3);
    sll.push_back(10);
    sll.push_back(20);
    sll.push_back(30);
    sll.push_back(100);

    sll.print_all();

    return 0;
}