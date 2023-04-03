//
// Created by fade on 2023/4/3.
//
#include <stdio.h>
int imax(int, int);
int main(void)
{
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 9));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
    return 0;
}

int imax(n, m)
        int n, m;{
    return (n > m) ? n : m;
}