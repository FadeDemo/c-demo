//
// Created by fade on 2023/4/1.
//
#include <stdio.h>
void pound(int n);
int main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0;
    pound(times);
    pound(ch);
    pound(f);
    return 0;
}

void pound(int n) {
    while (n-- > 0) printf("#");
    printf("\n");
}