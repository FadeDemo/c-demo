//
// Created by fade on 2023/3/31.
//
#include <stdio.h>
int main(void)
{
    float speed, size;
    printf("Please enter your speed (Mb/s): ");
    scanf("%f", &speed);
    printf("Please enter your file size (MB): ");
    scanf("%f", &size);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
    printf("downloads in %.2f seconds.\n", size * 8 / speed);
    return 0;
}