// Extra Credit bp 1
#include <stdio.h>
#include <string.h>


// name struct
struct name 
{
    char First_Name[10];
    char Last_Name[10];
} ;

// student struct with name struct inherited
struct student 
{
    struct name name;
    float grade[3];
} ;

void create_csvfile(struct student student[4]);

int main() {
    struct student s[4] = {                        // initialise student array with names built in 
            {{ "Matt", "Jimston"}, 45, 67, 100},
            {{ "Roy", "Simons"}, 20, 43, 60},
            {{ "Pam", "Sammy"}, 100, 93, 95},
            {{ "Peter", "Wellington"}, 60, 56, 78}
        };
    
    create_csvfile(s);
    return 0;
}

// creating .csv file
void create_csvfile(struct student student[4]) {
    FILE *fp;
    int i;
    
    fp = fopen("structs.csv", "w");

    for (i = 0; i < 4; ++i) {
        fprintf(fp, "%s, %s, %.2f, %.2f, %.2f\n",
        student[i].name.First_Name,
        student[i].name.Last_Name,
        student[i].grade[0],
        student[i].grade[1],
        student[i].grade[2]);
    }
    fclose(fp);
}