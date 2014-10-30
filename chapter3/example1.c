#include <stdio.h>
#include <stdlib.h>

/*
print A for exam grades greater than or equal to 90,
B for grades greater than or equal to 80 (but less than 90),
C for grades greater than or equal to 70 (but less than 80),
D for grades greater than or equal to 60 (but less than 70),
and F for all other grades.

Example 3.1

*/

int main()
{
    int grade;

    printf("Enter your grade:");
    scanf("%d", &grade);

    if(grade>=90){
      printf("A");
    }
      else if(grade>=80){
        printf("B");
      }
        else if(grade>=70){
          printf("C");
        }
          else if(grade>=60){
            printf("D");
          }
            else {
              printf("F");
            }
    return 0;
}
