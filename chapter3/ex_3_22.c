#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that utilizes looping to print the numbers
from 1 to 10 side by side on the same line with three spaces between numbers.


Exercise 3.22

*/

int main()
{
    int i=1;

    while(i<=10){
      printf("%d   ", i);
      ++i;
    }

    return 0;
}
