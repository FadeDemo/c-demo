//
// Created by fade on 2023/4/1.
//
#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("$");
        }
        printf("\n");
    }
}