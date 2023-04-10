//
// Created by fade on 2023/4/10.
//

#ifndef C_DEMO_16_6_NAMES_ST_H
#define C_DEMO_16_6_NAMES_ST_H
#include "my_string.h"
#define SLEN 32
struct names_st {
    char first[SLEN];
    char last[SLEN];
};
typedef struct names_st names;
void get_names(names *);
void show_names(const names *);
#endif //C_DEMO_16_6_NAMES_ST_H
