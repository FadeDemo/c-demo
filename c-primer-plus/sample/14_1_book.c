//
// Created by fade on 2023/4/7.
//
#include <stdio.h>
#include "my_string.h"
char * s_gets(char *, int);
#define MAXTITL 41
#define MAXAUTL 31
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void)
{
    struct book library;
    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITL);
    printf("Now enter the author.\n");
    s_gets(library.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("Done.\n");
    return 0;
}