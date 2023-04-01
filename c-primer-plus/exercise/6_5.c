//
// Created by fade on 2023/4/1.
//
#include <stdio.h>
int main(void)
{
    char c;
    int row;
    printf("Please enter a upper case letter: ");
    scanf("%c", &c);
    row = c - 'A' + 1;
    for (int i = 0; i < row; ++i) {
        // print spaces
        for (int j = 1; j < row - i; ++j) {
            printf(" ");
        }
        // print letters in asc order
        for (int j = 0; j < i; ++j) {
            printf("%c", 'A' + j);
        }
        // print letters in desc order
        for (char j = 'A' + i; j >= 'A'; --j) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}