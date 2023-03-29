//
// Created by fade on 2023/3/29.
//
#include <stdio.h>
int main(void)
{
    float num = 123e5;
    float toBig = num * 3.4e37;
    printf("num is %f, tooBig is %f", num, toBig);
    float small = 1.0;
    float toSmall = small / 1e10;
    printf("small is %f, to small is %f", small, toSmall);
    return 0;
}
