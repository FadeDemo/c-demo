//
// Created by fade on 2023/4/6.
//
#include <stdio.h>
#include <stdlib.h>
void critic(int *);
int main(void)
{
    // 先分配存储空间
    int * units = (int *) malloc(sizeof(int));
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", units);
    while (*units != 56) {
        critic(units);
    }
    printf("You must have looked it up!\n");
    return 0;
}
void critic(int * units) {
    printf("No luck, my friend. Try again.\n");
    scanf("%d", units);
}