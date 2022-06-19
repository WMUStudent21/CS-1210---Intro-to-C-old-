// Assignment 2 Ex. 5

#include <stdio.h>

int main(void) 
    {
        float dw_spd;
        float file_sz;
        float time;
        printf("Input download speed in Mbps: ");
        scanf("%f", &dw_spd);
        printf("Input file size in MB: ");
        scanf("%f", &file_sz);
        time = file_sz/(0.125*dw_spd);
        printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.", dw_spd, file_sz, time);
        return 0;
    }