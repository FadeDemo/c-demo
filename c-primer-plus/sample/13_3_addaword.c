//
// Created by fade on 2023/4/6.
//
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define MAX 41
int main(void)
{
    FILE * fp;
    char words[MAX];
    if ((fp = fopen("D:\\xxxxxxx\\c-demo\\c-primer-plus\\data\\add_word.txt", "a+")) == NULL) {
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add to the file; press the #");
    puts("Key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words)) == 1 && (words[0] != '#')) {
        fprintf(fp, "%s\n", words);
    }
    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1) {
        puts(words);
    }
    puts("Done!");
    if (fclose(fp) != 0) {
        fprintf(stderr, "Error closing file\n");
    }
    return 0;
}