//
// Created by fade on 2023/4/5.
//
#include <stdio.h>
extern int count;
static int total;
void accumulate(int k);
void accumulate(int k) {
    static int subtotal = 0;
    if (k <= 0) {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    } else {
        subtotal += k;
        total += k;
    }
}