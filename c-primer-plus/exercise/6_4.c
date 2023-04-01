//
// Created by fade on 2023/4/1.
//
#include <stdio.h>
int main(void)
{
    for (int i = 0; i <= 5; ++i) {
        int delta = i * (i + 1) / 2;
        for (char c = 'A' + delta; c <= 'A' + delta + i; ++c) {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}