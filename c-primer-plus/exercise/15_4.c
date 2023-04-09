//
// Created by fade on 2023/4/9.
//
#include <stdio.h>
#include <stdlib.h>
int isBitOpen(int, int);
int main(void)
{
    int num = 5;
    int pos = 4;
    printf("%d bit-%d is %d", num, pos, isBitOpen(num, pos));
    return 0;
}
int isBitOpen(int num, int pos) {
    if (num < (1 << pos)) {
        exit(EXIT_FAILURE);
    }
    return (num & (1 << pos)) == 1 ? 1 : 0;
}