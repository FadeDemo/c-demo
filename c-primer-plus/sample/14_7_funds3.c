//
// Created by fade on 2023/4/7.
//
#include <stdio.h>
#define FUNDLEN 50
struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(struct funds);
int main(void)
{
    struct funds stan = {
            "Garlic-Melon Bank",
            4032.27,
            "Lucky's Savings and Load",
            8543.94
    };
    printf("Stan has a total of $%.2f.\n", sum(stan));
    return 0;
}
double sum(struct funds money) {
    return (money.bankfund + money.savefund);
}