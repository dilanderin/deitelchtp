#include <stdio.h>
#include <stdlib.h>

/*
A class of ten students took a quiz. The grades (integers in the range 0 to 100)
for this quiz are available to you. Determine the class average on the quiz.

Example 3.1

*/

int main()
{
    int grade, total, counter, average;

    average = 0;
    total = 0;
    counter = 1;

    while (counter<=10){
        printf("Enter the grade");
        scanf("%d", &grade);
        total = total+grade;
        counter += 1;
    }

    average= total/10;

    printf("Class average is %d", average);
    return 0;
}
