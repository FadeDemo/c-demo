//
// Created by fade on 2023/4/7.
//
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ch;
    FILE * fp;
    unsigned long count = 0;
    char * filename = (char *) malloc(80 * sizeof(char));
    printf("Please enter filename:\n");
    scanf("%s", filename);
    if ((fp = fopen(filename, "r")) == NULL) {
        printf("Can't open %s\n", filename);
    }
    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    puts("");
    printf("File %s has %lu characters\n", filename, count);
    return 0;
}