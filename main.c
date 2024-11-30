#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "func.h"

int main(int argc, char** argv){
    int size; 
    for (int i = 1; i < argc; i++){
        if ((argv[i][0] == '-') && (!strchr("0123456789", argv[i][1]))){
            size = (i + 1)/3;
            break;
        }
        if (i == argc - 1){
            size = (i + 1)/3;
        }
    }
    int* results = malloc(sizeof(int) * size);
    if (!results){
        printf("Error with memory allocation\n");
        return -1;
    }
    int i = 1;
    for (int j = 0; j < size; j++){
        int arg0 = atoi(argv[i]);
        i++;
        char op = argv[i][0];
        i++;
        int arg1 = atoi(argv[i]);
        results[j] = get_ans(arg0, arg1, op);
        if (results[j] == INT_MIN){
            printf(" in expression %d\n", j + 1);
            free(results);
            return 0;
        }
        i++;
    }
    print_ans(results, size);
        i++;
        print_ans_str(results, size, atoi(argv[i]));
    }
    free(results);
    return 0;
