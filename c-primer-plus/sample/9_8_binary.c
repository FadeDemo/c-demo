//
// Created by fade on 2023/4/3.
//
#include <stdio.h>
void to_binary(unsigned long);
int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1) {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done!.\n");
}

void to_binary(unsigned long n) {
    int r;
    r = n % 2;
    if (n >= 2) {
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
    return;
}