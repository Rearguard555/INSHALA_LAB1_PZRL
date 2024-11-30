#include <stdio.h>
#include <limits.h>
int get_ans(int l, int r, char o){
    switch(o){
        case '+':
            return l + r;
        case '-':
            return l - r;
        case '*':
            return l * r;
        case '%':
            if (r == 0){
                printf("ERROR: division by zero");
                return INT_MIN;
            }
            return l % r;
        default:
            printf("ERROR: unknown operator");
                return INT_MIN;
    }
