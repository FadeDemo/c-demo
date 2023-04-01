//
// Created by fade on 2023/4/1.
//
#include <stdio.h>
int main(void)
{
    char c[26];
    for (int i = 0; i < 26; ++i) {
        c[i] = 'a' + i;
        printf("%c", c[i]);
    }
    return 0;
}