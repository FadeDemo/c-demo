//
// Created by fade on 2023/4/4.
//
#include <stdio.h>
int get_arr_max(int *, int);
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("max in arr is %d", get_arr_max(arr, 5));
    return 0;
}
int get_arr_max(int * arr, int n) {
    int max = *arr;
    for (int i = 0; i < n; ++i) {
        if (max < *(arr + i)) {
            max = *(arr + i);
        }
    }
    return max;
}
