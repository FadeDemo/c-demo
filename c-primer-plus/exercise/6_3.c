//
// Created by fade on 2023/4/1.
//
#include <stdio.h>
int main(void)
{
    for (int i = 0; i <= 5; ++i) {
        for (char c = 'F'; c >= 'F' - i; --c) {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}