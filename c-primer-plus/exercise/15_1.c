//
// Created by fade on 2023/4/9.
//
#include <stdio.h>
#include "string.h"
#include <stdlib.h>
int binaryStringToInt(const char *);
int main(void)
{
//    char * pbin = "11111111111111111111111111111111";
    char * pbin = "10000000000000000000000000000000";
    // not support itoa
    char * p = (char *) malloc(sizeof(int) * 8 + 1);
//    itoa(-5, pbin, 2);
    printf("binary: %s, digit: %d, strtol: %ld", pbin, binaryStringToInt(pbin), strtol("-10000000000000000000000000000000", &p, 2));
    return 0;
}
int binaryStringToInt(const char * p) {
    int length = sizeof(int) * 8;
    size_t sLen = strlen(p);
    int isNegative = (sLen == length) && (*p == '1');
    int val = 0;
    for (const char * i = isNegative ? p + 1: p ; i <= p + sLen - 1 ; ++i) {
        int bit = (*i == '1') ? 1 : 0;
        bit ^= isNegative;
        val = (val << 1) + bit;
    }
    if (isNegative) {
        val = -(val + 1);
    }
    return val;
}