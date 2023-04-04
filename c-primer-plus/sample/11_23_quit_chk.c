//
// Created by fade on 2023/4/4.
//
#include <stdio.h>
#include "my_string.h"
#define SIZE 80
#define LIM 10
#define STOP "quit"
int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;
    printf("Enter up to %d lines (type quit to quit):\n", LIM);
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && strcmp(input[ct], STOP) != 0) {
        ct++;
    }
    printf("%d strings entered\n", ct);
    return 0;
}