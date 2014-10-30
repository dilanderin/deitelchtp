#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that prints 100 asterisks, one at a time. After every tenth
asterisk, your program should print a newline character. [Hint: Count from 1 to
100. Use the remainder operator to recognize each time the counter reaches
a multiple of 10.]

Exercise 3.37

*/

int main()
{
    int i=1;

    while(i<=100){

      printf("*");

      if(i%10==0){
        printf("\n");
      }

      ++i;

    }

    return 0;
}
