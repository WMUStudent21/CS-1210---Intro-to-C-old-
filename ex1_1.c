#include <stdio.h>

int main(void) {
    char first[8] = "Michael", last[4] = "Loh";
    
    printf("%s %s \n", first, last);
    printf("%s\n%s \n", first, last);
    printf("%s", first);
    printf(" %s", last);
    return 0;
}