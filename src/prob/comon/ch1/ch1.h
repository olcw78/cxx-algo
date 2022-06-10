#ifndef C3A68170_DAFB_47CF_BB22_6585DF7F4C5F
#define C3A68170_DAFB_47CF_BB22_6585DF7F4C5F

namespace prob {
    int get_max(int a, int b);

    int get_sum(int data[], int n);

    int get_max_arr(int data[], int n);

    /**
*
* @param data 각 사람들의 키를 저장한 배열
* @param n     사람들의 수
* @param m     미주의 키
* @param s     지수의 키
* @return      미주 혹은 지수와  키가 일치하는 사람의 수
*/
    int get_count(int data[], int n, int m, int s);
}

#endif /* C3A68170_DAFB_47CF_BB22_6585DF7F4C5F */
