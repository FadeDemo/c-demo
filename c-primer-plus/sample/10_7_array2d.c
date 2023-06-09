//
// Created by fade on 2023/4/4.
//
#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int [][COLS], int);
int sum2d(int(*ar)[COLS], int rows);
int main(void)
{
    int junk[ROWS][COLS] = {
            {2, 4, 6, 8},
            {3, 5, 7, 9},
            {12, 10, 8, 6}
    };
    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
    return 0;
}
void sum_rows(int ar[][COLS], int rows) {
    int r;
    int c;
    int tot;
    for (r = 0; r < rows; r++) {
        tot = 0;
        for (c = 0; c < COLS; c++) {
            tot += ar[r][c];
        }
        printf("row %d: sum = %d\n", r, tot);
    }
}
void sum_cols(int ar[][COLS], int rows) {
    for (int i = 0; i < COLS; ++i) {
        int tot = 0;
        for (int j = 0; j < rows; ++j) {
            tot += ar[j][i];
        }
        printf("col %d: sum = %d\n", i, tot);
    }
}
int sum2d(int ar[][COLS], int rows) {
    int tot = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < COLS; ++j) {
            tot += ar[i][j];
        }
    }
    return tot;
}