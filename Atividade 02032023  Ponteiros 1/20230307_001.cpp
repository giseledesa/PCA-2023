#include <stdio.h>

void printFloatVector(float *start, float *end){
    float *p = start;
    while(p <= end){
        printf("%.2f ", *p);
        p++;
    }
    printf("\n");
}

int main(){
    float vec1[] = {5.5, 2.6, 7.7, 4.8, 5.9};
    float vec2[] = {6.1, 7.2, 3, 9.4};
    float vec3[] = {10.5, 66.6, 12.7};
    printFloatVector(&vec1[0], &vec1[2]);
    printFloatVector(&vec1[3], &vec1[4]);
    printFloatVector(&vec2[1], &vec2[2]);
    printFloatVector(&vec2[0], &vec2[3]);
    printFloatVector(&vec3[0], &vec3[1]);
    printFloatVector(&vec3[1], &vec3[2]);
    return 0;
}
