//
// Created by fade on 2023/4/3.
//
#include <stdio.h>
double min(double, double);
int main(void)
{
    printf("%f and %f, %f is smaller", 1.2, 3.4, min(1.2, 3.4));
}
double min(double x, double y) {
    return x < y ? x : y;
}