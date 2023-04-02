//
// Created by fade on 2023/4/2.
//
#include <stdio.h>
int main(void)
{
    char ch;
    while ((ch = getchar()) != '#') {
        putchar(ch);
    }
    return 0;
}