// Assignment 2 Ex. 2

#include <stdio.h>

int main(void) 
    {
    char name[10];
    printf("What is your first name? ");
    scanf("%s", name);
    printf("''%s''\n", name);
    printf("'%20s'\n", name);
    printf("'%-20s'\n", name);
    printf("%3s\n", name);
    return 0;
    }