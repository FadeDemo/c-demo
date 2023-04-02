//
// Created by fade on 2023/4/2.
//
#include <stdio.h>
#include "ctype.h"
int main(void)
{
    int spaces = 0, lines = 0, others = 0;
    char c;
    while ((c = getchar()) != '#') {
        if (isblank(c)) {
            ++spaces;
        } else if (c == '\n') {
            ++lines;
        } else{
            ++others;
        }
    }
    printf("spaces: %d, lines: %d, others: %d", spaces, lines, others);
    return 0;
}