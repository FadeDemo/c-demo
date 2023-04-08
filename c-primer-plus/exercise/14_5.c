//
// Created by fade on 2023/4/8.
//
#include <stdio.h>
#define NAME_LEN 80
#define CSIZE 4
struct name {
    char first_name[NAME_LEN];
    char last_name[NAME_LEN];
};
struct student {
    struct name n;
    double grade[3];
    double average;
};
double getAverage(const struct student *);
void printStudent(struct student);
void printClassAverage(const struct student *);
int main(void)
{
    struct student students[CSIZE] = {
            {{"San", "Zhang"}},
            {{"Si", "Li"}},
            {{"Mazi", "Wang"}},
            {{"Fade", "Yang"}}
    };
    int i = 0;
    printf("Please enter %s %s's grade:", students[i].n.first_name, students[i].n.last_name);
    while (i < CSIZE && scanf("%lf %lf %lf", &students[i].grade[0], &students[i].grade[1], &students[i].grade[2]) == 3) {
        ++i;
        if (i <= CSIZE - 1) {
            printf("Please enter %s %s's grade:", students[i].n.first_name, students[i].n.last_name);
        }
    }
    for (int i = 0; i < CSIZE; ++i) {
        students[i].average = getAverage(&students[i]);
    }
    for (int i = 0; i < CSIZE; ++i) {
        printStudent(students[i]);
    }
    printClassAverage(students);
    return 0;
}
double getAverage(const struct student * p) {
    double sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += p->grade[i];
    }
    return sum / 3;
}
void printStudent(struct student s) {
    printf("%s %s's grade are %f %f %f, average is %f\n", s.n.first_name, s.n.last_name, s.grade[0], s.grade[1], s.grade[2], s.average);
}
void printClassAverage(const struct student * p) {
    double sum = 0;
    for (int i = 0; i < CSIZE; ++i) {
        sum += (p+i)->average;
    }
    printf("Class average is %f", sum / CSIZE);
}