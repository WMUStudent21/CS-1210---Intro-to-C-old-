// Exercise 3
#include <stdio.h>

int main() {
    int days_in, days_out, weeks_out;

    printf("Input a number of days to be converted to weeks-days: ");
    scanf("%d", &days_in);

    // add a validation loop
    while (days_in > 0) {
        weeks_out = days_in / 7;
        days_out = days_in % 7;
        
        printf("%d days are %d weeks, %d days.\n", days_in, weeks_out, days_out);
        printf("Input a number of days to be converted to weeks-days: ");
        scanf("%d", &days_in);
    }
    printf("Input parameters are invalid. Only positive integers are allowed.\nPlease relaunch the application.");
    return 0;
}