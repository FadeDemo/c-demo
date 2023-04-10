//
// Created by fade on 2023/4/10.
//
#include <stdio.h>
#include "16_6_names_st.h"
void get_names(names * pn) {
    printf("Please enter your first name: ");
    s_gets(pn -> first, SLEN);
    printf("Please enter your last name: ");
    s_gets(pn->last, SLEN);
}
void show_names(const names * pn) {
    printf("%s %s", pn->first, pn->last);
}