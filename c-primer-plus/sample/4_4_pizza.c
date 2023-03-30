//
// Created by fade on 2023/3/30.
//
#include <stdio.h>
#define PI 3.14159
int main(void)
{
    float area, circum, radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as fellows:\n");
    printf("circumference = %1.2f, are = %1.2f\n", circum, area);
    return 0;
}