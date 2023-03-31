//
// Created by fade on 2023/3/31.
//
#include <stdio.h>
int main(void)
{
    float num;
    printf("Please enter a float number: ");
    scanf("%f", &num);
    printf("The input is %f or %e\n", num, num);
    printf("The input is %+f or %E\n", num, num);
}