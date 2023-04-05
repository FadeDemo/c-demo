//
// Created by fade on 2023/4/5.
//
#include <stdio.h>
extern unsigned int rand0(void);
int main(void) {
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", rand0());
    }
}