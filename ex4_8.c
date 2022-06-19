// Problem #8
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>


char get_first();
float SecondNumDiv();
char Options();
float SecondNum();

int main() {
    char choice;
    float first, second, ans;

    while ((choice = Options())) {
        switch(choice) {
            case 'a':
                printf("Enter first number: ");
                while (scanf("%f", &first) != 1) {
                    while ((choice = getchar()) != '\n')
                        putchar(choice);
                    printf(" is not a number.\n");
                    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
                    scanf("%f", &first);
                }
                printf("Enter second number: ");
                while (scanf("%f", &second) != 1) {
                    while ((choice = getchar()) != '\n')
                        putchar(choice);
                    printf(" is not a number.\n");
                    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
                }
                ans = first + second;
                printf("%g + %g = %g\n", first, second, ans);
                break;
            case 's':
                printf("Enter first number: ");
                while (scanf("%f", &first) != 1) {
                    while ((choice = getchar()) != '\n')
                        putchar(choice);
                    printf(" is not a number.\n");
                    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
                }
                printf("Enter second number: ");
                while (scanf("%f", &second) != 1) {
                    while ((choice = getchar()) != '\n')
                        putchar(choice);
                    printf(" is not a number.\n");
                    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
                }
                ans = first - second;
                printf("%g - %g = %g\n", first, second, ans);
                break;
            case 'm':
                printf("Enter first number: ");
                while (scanf("%f", &first) != 1) {
                    while ((choice = getchar()) != '\n')
                        putchar(choice);
                    printf(" is not a number.\n");
                    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
                }
                second = SecondNum();
                ans = first * second;
                printf("%g x %g = %g\n", first, second, ans);
                break;
            case 'd':
                printf("Enter first number: ");
                while (scanf("%f", &first) != 1) {
                    while ((choice = getchar()) != '\n')
                        putchar(choice);
                    printf(" is not a number.\n");
                    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
                }
                second = SecondNumDiv();
                ans = first / second;
                printf("%g / %g = %g\n", first, second, ans);
                break;
            case 'q':
                printf("Bye.");
                exit(1);
            }
        } 
    return 0;
}

// char Options(void) {
//     char choice;

//     printf("Enter the operation of your choice:\na. add         s. subtract\nm. multiply    d. divide\nq. quit\n");
//     while (true) {
// 		switch (scanf(" %c", &choice)) {
// 		case 'a':
// 		case 's':
// 		case 'm':
// 		case 'd':
// 		case 'q':
//             break;
// 		}
// 		break;
// 	}
// 	return choice;
// }
char Options() {
    char choice;

    printf("Enter the operation of your choice:\na. add         s. subtract\nm. multiply    d. divide\nq. quit\n");
    while (true) {
		switch (choice = get_first()) {
		case 'a':
		case 's':
		case 'm':
		case 'd':
		case 'q':
            break;
		}
		break;
	}
	return choice;
}


// Copied from p. 326

char get_first(void)        // same as scanf(" %c", &ch); but is robust enough to withstand >1 char input and whitespace inputs
 {
    int ch;
    
    while (isspace((ch = getchar())))
		continue;
    while (getchar() != '\n')
        continue;
    return ch;
 }

float SecondNumDiv(void) {
    float second;
    char choice;

    printf("Enter second number: ");
    while (true) {
        while (scanf("%f", &second) != 1) {
            while ((choice = getchar()) != '\n')
                    putchar(choice);
            printf(" is not a number.\n");
			printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        if (second != 0)
			return second;
		printf("Enter a number other than 0: ");
    }   
}

float SecondNum() {
    float second;
    char choice;

    printf("Enter second number: ");
    while (true) {
        while (scanf("%f", &second) != 1) {
            while ((choice = getchar()) != '\n')
                    putchar(choice);
            printf(" is not a number.\n");
			printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
    return second;    
    }   
}