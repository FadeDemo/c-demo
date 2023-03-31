//
// Created by fade on 2023/3/31.
//
#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstName[50];
    char lastName[50];
    printf("Please enter your firstname: ");
    scanf("%s", firstName);
    printf("Please enter your lastname: ");
    scanf("%s", lastName);
    printf("%s %s\n", firstName, lastName);
    printf("%*zd %*zd\n", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName));
    printf("%s %s\n", firstName, lastName);
    printf("%-*zd %-*zd\n", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName));
    return 0;
}