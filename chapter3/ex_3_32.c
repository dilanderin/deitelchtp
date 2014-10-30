#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes
between 1 and 20. For example, if your program reads a size of 4, it should print

****
****
****
****

Exercise 3.32

*/

int main()
{
    unsigned int side, i=1, counter;

    printf("Enter the side of the square (integer):\n");
    scanf("%d", &side);

    while(i<=side){

    counter=1;

      while(counter<=side){
        printf("*");
        ++counter;
      }

      puts("");
      ++i;

    }

    return 0;
}
