// Exercise 18
#include <stdio.h>

int main() {
    const int DUNBAR = 150;
    int friends = 5, n = 0;

    // print initial friends @ week 0
    printf("%d friends in week %d\n", friends, n);

    // dunbar's number is approx. 150 so "<=" is justified.
    while (friends <= DUNBAR) {
        friends = 2*(friends-++n);
        printf("%d friends in week %d\n", friends, n);
    }
    return 0;
}