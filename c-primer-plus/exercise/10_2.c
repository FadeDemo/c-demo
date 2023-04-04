//
// Created by fade on 2023/4/4.
//
#include <stdio.h>
void copy_arr(double [], double [], int n);
void copy_ptr(double *, double *, int n);
void copy_ptrs(double [], double [], double *);
void arr_printf(double [], int n);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5], target2[5], target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    printf("target1:\n");
    arr_printf(target1, 5);
    printf("target2:\n");
    arr_printf(target2, 5);
    printf("target3:\n");
    arr_printf(target3, 5);
}
void copy_arr(double target[], double source[], int n) {
    for (int i = 0; i < n; ++i) {
        target[i] = source[i];
    }
}
void copy_ptr(double *target, double *source, int n) {
    for (int i = 0; i < n; ++i) {
        *(target + i) = *(source + i);
    }
}
void copy_ptrs(double target[], double source[], double *end) {
    for (double * p = source, *q = target; p <= end; p++, q++) {
        *q = *p;
    }
}
void arr_printf(double arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%f ", arr[i]);
    }
    printf("\n");
}