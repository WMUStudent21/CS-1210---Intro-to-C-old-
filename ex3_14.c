// Exercise 14
#include <stdio.h>

int main() {
    double in_arr[8], sum_arr[8], temp = 0;
    int i;
    
    printf("Insert 8 integers into an array\n");
    for (i=0; i<8; i++) {
        scanf("%lf", &in_arr[i]);
    }
    i=0;
    for (i=0; i<8; i++) {
        temp += in_arr[i];
        sum_arr[i] = temp;
    }
    printf("  1    2    3    4    5    6    7    8\n");
    i=0;
    for (i=0; i<8; i++) {
        printf("%5.2f",in_arr[i]);
    }
    printf("\n");
    i=0;
    for (i=0; i<8; i++) {
        printf("%5.2f",sum_arr[i]);
    }
}
