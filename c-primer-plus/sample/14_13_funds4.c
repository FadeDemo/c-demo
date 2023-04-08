//
// Created by fade on 2023/4/8.
//
#include <stdio.h>
#define FUNDLEN 50
#define N 2
struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(const struct funds [], int);
int main(void)
{
    struct funds jones[N] = {
            {
                "Garlic-Melon Bank",
                4032.27,
                "Luck's Savings and Load",
                8543.94
            },
            {
                "Honest Jack's Bank",
                3620.88,
                "Party Time Savings",
                3802.91
            }
    };
    printf("The Joneses have a total of $%.2f.\n", sum(jones, N));
    return 0;
}
double sum(const struct funds money[], int n) {
    double total = 0;
    for (int i = 0; i < n; ++i) {
        total += money[i].bankfund + money[i].savefund;
    }
    return total;
}