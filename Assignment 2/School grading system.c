#include <stdio.h>
#include <stdlib.h>

int main()
 {
    float mark,total=0;
    int count=0;
    printf("=== School Grading System ===\n");
    while (1) {
        printf("\nEnter mark (0-100, or -1 to quit): ");
        if (scanf("%f", &mark) != 1) {
            printf("Please enter a number.\n");
            while (getchar() != '\n');  /* clear bad input */
            continue;
        }

        if (mark == -1) break;

        if (mark < 0 || mark > 100)
            printf("Invalid mark! Use 0 to 100.\n");
        else if (mark >= 70) printf("Grade: A\n");
        else if (mark >= 60) printf("Grade: B\n");
        else if (mark >= 50) printf("Grade: C\n");
        else if (mark >= 40) printf("Grade: D\n");
        else                 printf("Grade: E\n");
        count++;
        total += mark;
    }
    if (count>0)

    printf("\n You graded %d marks.Average:%lf\n", count,total/count);
    else
        printf("\n No marks entered.\n");
    return 0;
}
