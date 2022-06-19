//ex1.c

#include <stdio.h>

int main(void) {
    char first[8] = "Michael", last[4] = "Loh";
    
    printf("%s %s \n", first, last);
    printf("%s\n%s \n", first, last);
    printf("%s", first);
    printf(" %s", last);
    return 0;
}


//ex3.c
// but take fractional years and leap years into account in your program. 
// You should specify your birthdate and calculate your age in days.
#include <stdio.h>

int main(void) {
    float age = 21.67;
    int age_conv, age_withleap;

    age_conv = age * 365;
    age_withleap = age_conv + (age / 4);
    printf("My age in exact years is %d and converted to days are %d. My birthdate is 02/02/2000.", age, age_withleap);
    return 0;
}

// ex8.c

#include <stdio.h>

int two(void) {
    printf("two\n");
    return 0;
}

int one_three(void) {
    printf("one\n");
    two();
    printf("three\n");
    return 0;
}

int main(void) {
    printf("starting now:\n");
    one_three();
    printf("done!");
    return 0;
}