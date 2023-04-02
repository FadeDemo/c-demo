//
// Created by fade on 2023/4/2.
//
#include <stdio.h>
#include "ctype.h"
int main(void)
{
    long oddNum = 0, oddSum = 0;
    long evenNum = 0, evenSum = 0;
    char c;
    while ((c = getchar()) != '0') {
        if (isdigit(c)) {
            int val = c - '0';
            if (val % 2 == 0) {
                evenNum++;
                evenSum += val;
            } else {
                oddNum++;
                oddSum += val;
            }
        }
    }
    printf("oddNum: %ld, oddSum: %ld, oddAverage: %f\n", oddNum, oddSum, oddSum * 1.0 / oddNum);
    printf("evenNum: %ld, evenNum: %ld, evenAverage: %f\n", evenNum, evenSum, evenSum * 1.0 / evenNum);
    return 0;
}