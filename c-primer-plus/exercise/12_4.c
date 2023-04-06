//
// Created by fade on 2023/4/6.
//
#include <stdio.h>
static int times;
void func(void);
int main(void)
{
    for (int i = 0; i < 10; ++i) {
        func();
    }
    printf("func was called %d times", times);
    return 0;
}
void func(void) {
    times++;
}