#include <stdio.h>
#include <string.h>

int main(void) 
    {
    char f_name[10], l_name[10];

    printf("What is your first name? ");
    scanf("%s", f_name);
    printf("What is your last name? ");
    scanf("%s", l_name);
    printf("%s %s\n", f_name, l_name);

    int f_len = strlen(f_name), l_len = strlen(l_name);

	printf("%s %s\n", f_name, l_name);
	printf("%*d %*d\n", f_len, f_len, l_len, l_len);
	printf("%s %s\n", f_name, l_name);
	printf("%-*d %-*d\n", f_len, f_len, l_len, l_len);
    return 0;
    }