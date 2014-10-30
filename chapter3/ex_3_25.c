#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that utilizes looping to produce the following table of values:

A   A+2 A+4 A+6
3   5   7   9
6   8   10  12
9   11  13  15
12  14  16  18
15  17  19  21

Exercise 3.25

*/

int main()
{
    int number=3;

    printf("\nA\tA+2\tA+4\tA+6\n\n");

    while(number<=15){

      printf("%d\t%d\t%d\t%d\t\n", number, number+2, number+4, number+6);

      number+= 3;
    }

    return 0;
}
