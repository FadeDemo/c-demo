//
// Created by fade on 2023/4/9.
//
#include <stdio.h>
// fixme only replace X
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n", X)
int main(void)
{
    int x = 5;
    int z;
    printf("x = %d\n", x);
    z = SQUARE(x);
    printf("Evaluating SQUARE(x): ");
    PR(z);
    z = SQUARE(2);
    printf("Evaluating SQUARE(2): ");
    PR(z);
    // fixme
    printf("Evaluating SQUARE(x+2): ");
    PR(SQUARE(x + 2));
    // fixme
    printf("Evaluating 100/SQUARE(2): ");
    PR(100 / SQUARE(2));
    printf("x is %d.\n", x);
    printf("Evaluating SQUARE(++x): ");
    // fixme
    PR(SQUARE(++x));
    printf("After incrementing, x is %x.\n", x);
    return 0;
}