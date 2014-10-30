#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
What does the following program print?

Exercise 3.28

*/

int main()
{
    unsigned int count=1;

    while(count<=10){

      puts(count % 2 ? "****" : "++++++++");

      ++count;

    }
    return 0;
}
