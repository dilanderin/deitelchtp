#include <stdio.h>
#include <stdlib.h>

/*
What does the following program execution

Exercise 4_8

*/

int main()
{
    unsigned int x, y, i, j;

    printf("Enter two unsigned integers in the range 1-20:\n");
    scanf("%u%u", &x, &y);

    for(i=1; i<=y; ++i){

      for(j=1; j<=x; ++j){
        printf("@");
      }

      puts("");
    }

    return 0;
}
