//
// Created by fade on 2023/4/4.
//
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
        int i = 0;
        while (words[i] != '\n' && words[i] != '\0') {
            i++;
        }
        if (words[i] == '\n') {
            words[i] = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
        puts(words);
    }
    puts("Done.");
    return 0;
}