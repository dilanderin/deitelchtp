#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that keeps printing the multiples of the integer 2, namely
2, 4, 8, 16, 32, 64, and so on. Your loop should not terminate (i.e., you should
create an infinite loop). What happens when you run this program?

Exercise 3.40

*/

int main()
{
    int i=2;

    while(1){
      printf("%d\n", i);
      i*=2;

    }

    return 0;
}
