//
// Created by fade on 2023/4/9.
//
#include <stdio.h>
int bitOpenCount(int);
int main(void)
{
    int num = 8;
    printf("%d has %d bits which are 1.", num, bitOpenCount(num));
}
int bitOpenCount(int num) {
    int ans = 0;
    for (int i = 0; i < sizeof(int) * 8; ++i) {
        if ((num & (1 << i)) != 0) {
            ++ans;
        }
    }
    return ans;
}