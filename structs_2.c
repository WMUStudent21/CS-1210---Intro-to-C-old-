// Structures Assignment
#include <stdio.h>

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
    float average;
} ;

void grading_insert(struct student *);
void calc_avg(struct student *);
void printfo(struct student [4]);
void class_avg(struct student [4]);
void create_csvfile(struct student student[4]);

int main(void) 
{
    struct student s[4] = {                        // initialise student struct array with names built in of size 4 
        {{ "Matt", "Jimston"}},
        {{ "Roy", "Simons"}},
        {{ "Pam", "Sammy"}},
        {{ "Peter", "Wellington"}}
    };

    printf("Please enter Students' information:\n");
    grading_insert(s);
    calc_avg(s);
    printfo(s);
    class_avg(s);
    create_csvfile(s);
    return 0;
}


// using a for-loop to iterate through array of size 3, inserting grades
void grading_insert(struct student * student) {
    int i,j;
    
    for (i = 0; i < 4; ++i) {
        printf("Enter grades for %s\n", student[i].name.First_Name);
        for (j = 0; j < 3; ++j) {
            printf("Enter marks: \n");
            scanf("%f", student[i].grade + j);
        }
    }
}


// sum of grade array divided by length of array (3) to find average
void calc_avg(struct student * student) {
    int i,j;

    for (i = 0; i < 4; ++i) {
        float temp = 0;
        for (j = 0; j < 3; ++j) {
            temp += student[i].grade[j];
        }
        student[i].average = temp/3;
    }
}


// iterate through elements of struct array to print data
void printfo(struct student student[4]) {
    int i;

    for (i = 0; i < 4; ++i) {
        printf("%5s %10s | Average: %.1f | Grades: %.1f, %.1f, %.1f\n\n",
        student[i].name.First_Name,
        student[i].name.Last_Name,
        student[i].grade[0],
        student[i].grade[1],
        student[i].grade[2],
        student[i].average);
    }
}


// sum of student average divided by length of student struct array (4)
void class_avg(struct student student[4]) {
    int i;
    float class_avg = 0;

    for (i = 0; i < 4; ++i) {
        class_avg += student[i].average;
    }
    printf("Class average: %.1f\n", class_avg/4);
}

// creating .csv file
void create_csvfile(struct student student[4]) {
    FILE *fp;
    int i;
    
    fp = fopen("structs.csv", "w");

    for (i = 0; i < 4; ++i) {
        fprintf(fp, "%s, %s, %.2f, %.2f, %.2f, %.2f\n",
        student[i].name.First_Name,
        student[i].name.Last_Name,
        student[i].grade[0],
        student[i].grade[1],
        student[i].grade[2],
        student[i].average);
    }
    fclose(fp);
}