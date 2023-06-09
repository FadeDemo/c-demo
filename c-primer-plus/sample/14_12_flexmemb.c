//
// Created by fade on 2023/4/7.
//
#include <stdio.h>
#include "stdlib.h"
struct flex {
    size_t count;
    double average;
    double scores[];
};
void showFlex(const struct flex *);
int main(void)
{
    struct flex * pf1, * pf2;
    int n = 5;
    double tot = 0;
    pf1 = (struct flex *) malloc(sizeof(struct flex) + n * sizeof(double));
    pf1->count = n;
    for (int i = 0; i < n; ++i) {
        pf1->scores[i] = 20.0 - i;
        tot += pf1->scores[i];
    }
    pf1->average = tot / n;
    showFlex(pf1);
    n = 9;
    tot = 0;
    pf2 = (struct flex *) malloc(sizeof(struct flex) + n * sizeof(double));
    pf2->count = n;
    for (int i = 0; i < n; ++i) {
        pf2->scores[i] = 20.0 - i / 2.0;
        tot += pf2->scores[i];
    }
    pf2->average = tot / n;
    showFlex(pf2);
    free(pf1);
    free(pf2);
    return 0;
}
void showFlex(const struct flex * p) {
    printf("Scores : ");
    for (int i = 0; i < p->count; ++i) {
        printf("%g ", p->scores[i]);
    }
    printf("\nAverage: %g\n", p->average);
}