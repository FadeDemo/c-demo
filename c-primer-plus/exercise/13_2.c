//
// Created by fade on 2023/4/7.
//
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE * source, * dest;
    if (argc < 3) {
        printf("Usage: %s source_filename dest_filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((source = fopen(argv[1], "rb")) == NULL) {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((dest = fopen(argv[2], "ab+")) == NULL) {
        printf("Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    char * buffer = (char *) malloc(4096 * sizeof(char));
    size_t size = 0;
    while ((size = fread(buffer, sizeof(char), 4096, source)) > 0) {
        fwrite(buffer, sizeof(char), size, dest);
    }
    fclose(dest);
    fclose(dest);
    return 0;
}