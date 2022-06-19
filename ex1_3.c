#include <stdio.h>

int main(void) {
    float age = 21.67;
    int age_conv, age_withleap;

    age_conv = age * 365;
    age_withleap = age_conv + (age / 4);
    printf("My age in exact years is %.1f and converted to days are %d. My birthdate is 02/02/2000.", age, age_withleap);
    return 0;
}