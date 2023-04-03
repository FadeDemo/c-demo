//
// Created by fade on 2023/4/3.
//
#include <stdio.h>
void interchange(int *, int *);
int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);
    return 0;
}
void interchange(int * u, int * v) {
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}