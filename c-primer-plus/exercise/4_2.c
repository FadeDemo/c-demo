//
// Created by fade on 2023/3/31.
//
#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[50];
    printf("Please enter your last name: ");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", strlen(name) + 3, name);
    return 0;
}