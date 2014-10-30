#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
What does the following program print?

Exercise 3.29

*/

int main()
{
    unsigned int row = 10;
    unsigned int column;

    while(row >= 1){
      column = 1;

      while(column <= 10){
        printf("%s", row%2 ? "<" : ">");
        ++column;
      }

      --row;
      puts("");

    }

    return 0;
}
