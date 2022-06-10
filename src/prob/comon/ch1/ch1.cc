#include "ch1.h"
#include <bits/stdc++.h>

namespace prob {
    int get_max(int a, int b) {
        return a > b ? a : b;
    }

    int get_sum(int data[], int n) {
        return (data[0] + data[n - 1]) * n / 2;

//        int sum = data[0];
//        for (int i = 1; i < n; ++i)
//            sum += data[i];
//        return sum;
    }

    int get_max_arr(int *data, int n) {
        int max = data[0];
        for (int i = 1; i < n; ++i) {
            if (max < data[i])
                max = data[i];
        }
        return max;
    }

    int get_count(int data[], int n, int m, int s) {
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (data[i] == m || data[i] == s)
                ++count;
        }

        return count;
    }
}