//
// Created by fade on 2023/4/11.
//
#include <stdio.h>
#define reciprocal(x) (1./(x))
#define average(x,y) (((x) + (y)) * 1.0 / 2)
int main(void)
{
    printf("harmonic mean of %d and %d is %g", 2, 3, reciprocal(average(reciprocal(2), reciprocal(3))));
}