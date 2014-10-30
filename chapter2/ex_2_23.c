#include <stdio.h>
#include <stdlib.h>

/*
Write a program that reads in three integers and then determines and prints the largest and the smallest integers in the group.
Use only the programming techniques you have learned in this chapter.

Exercise 2.23

*/

int main()
{
    int num1, num2, num3, smallest, largest;

    printf("Enter three integers:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    largest=num1;

    if(num2>largest){
      largest=num2;
    }

    if(num3>largest){
      largest=num3;
    }

    printf("The largest integer is %d\n", largest);

    smallest=num1;

    if(num2<smallest){
      smallest=num2;
    }

    if(num3<smallest){
      smallest=num3;
    }

    printf("The smallest integer is %d\n", smallest);


    return 0;
}
