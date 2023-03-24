#include <stdio.h>
#include <stdlib.h>

#define NULL 0

int* findIntValue(int *start, int *end, int value){
    int *p = start;
    while(p <= end){
        if(*p == value){
            return p;
        }
        p++;
    }
    return NULL;
}

int main(){
    int vec[] = {1, 2, 3, 2, 4, 5, 2, 6, 7, 8};
    int *start = &vec[0];
    int *end = &vec[9];

    int *p = findIntValue(start, end, 2);
    while(p != NULL){
        printf("Endereco de memoria: %p\n", p);
        p = findIntValue(p + 1, end, 2);
    }

    return 0;
}

