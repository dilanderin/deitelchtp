#include <stdio.h>
#include <stdlib.h>

/*

Develop a class-averaging program that will process an arbitrary number of
grades each time the program is run.

Figure 3_8
*/

int main()
{
    int total, grade;
    unsigned int counter;
    float average;

    total=0;
    counter=0;

    printf("Enter the grade, enter -1 to end:");
    scanf("%d", &grade);

    while(grade != -1){
        total= total+grade;
        counter += 1;
        printf("Enter the grade, enter -1 to end:\n");
        scanf("%d", &grade);
    }

    if (counter!= 0){
        average = (float) total/counter;
        printf("Class' average grade is %.2f\n", average);
    }
    else {
        printf("No grades were entered.\n");
    }

    return 0;
}
