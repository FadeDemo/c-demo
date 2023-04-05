//
// Created by fade on 2023/4/5.
//
#include <stdio.h>
void trystat(void);
int main(void)
{
    for (int i = 0; i < 3; ++i) {
        printf("Here comes iteration %d:\n", i);
        trystat();
    }
    return 0;
}
void trystat(void) {
    int fade = 1;
    static int stay = 1;
    printf("fade = %d and stay = %d\n", fade++, stay++);
}