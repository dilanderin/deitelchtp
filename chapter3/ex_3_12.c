#include <stdio.h>
#include <stdlib.h>

/*
What does the following program print?

Exercise 3.12

*/

int main()
{
    unsigned int x=1, total=0, y;

    while(x<=10){
      y=x*x;
      printf("%u\n", y);
      total+=y;
      x++;
    }

    printf("The total is %d\n", total);

    return 0;
}
