//
// Created by fade on 2023/4/1.
//
#include <stdio.h>
#define HOUR 60
int main(void)
{
    int minutes = 1;
    while (minutes > 0) {
        printf("Please enter minutes: ");
        scanf("%d", &minutes);
        if (minutes <= 0) {
            break;
        }
        int hour = minutes / HOUR;
        printf("%d minutes equals to %d hours %d minutes\n", minutes, hour, minutes % HOUR);
    }
    return 0;
}