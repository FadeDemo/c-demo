//
// Created by fade on 2023/4/3.
//
#include <stdio.h>
#define SIZE 4
int main(void)
{
    short dates[SIZE];
    short * pti;
    double bills[SIZE];
    double * ptf;
    pti = dates;
    ptf = bills;
    printf("%23s %15s\n", "short", "double");
    for (int i = 0; i < SIZE; ++i) {
        printf("pointer + %d: %10p %10p\n", i, pti + i, ptf + i);
    }
    return 0;
}