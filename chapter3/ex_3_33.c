#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Modify the program you wrote in Exercise 3.32 so that it prints a hollow square.
For example, if your program reads a size of 5, it should print

*****
*   *
*   *
*   *
*****

Exercise 3.33

*/

int main()
{
    unsigned int side, i=1, counter=1;

    printf("Enter the side of the square (integer):\n");
    scanf("%d", &side);

    while(i<=side){

      if(i==1){

          counter=1;

          while(counter<=side){
            printf("*");
            ++counter;
          }

          puts("");
          ++i;
      }

      else if(i==side){

        counter=1;

        while(counter<=side){
          printf("*");
          ++counter;
        }

        puts("");
        ++i;
      }

      else{
        counter=1;

        while(counter<=side){
          if(counter==1){
            printf("*");
          }

          else if(counter==side){
            printf("*");
          }

          else{
            printf(" ");
          }

          ++counter;
        }

        puts("");
        ++i;
      }
    }

    return 0;
}
