//
// Created by fade on 2023/4/3.
//
#include <stdio.h>
#define MONTHS 12
int main(void)
{
    int days[] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    for (int i = 0; i < sizeof days / sizeof days[0]; ++i) {
        printf("Month %2d has %2d days.\n", i + 1, days[i]);
    }
    return 0;
}