#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Using an approach similar to Exercise 3.23, find the two largest values of
the 10 numbers. [Note: You may input each number only once.]

Exercise 3.26

*/

int main()
{
    int counter, number, largest, largest_2nd ;

    largest=0;
    counter=1;

    while(counter<=10){

      printf("Enter a number:\n");
      scanf("%d", &number);

      if(number>largest){
        largest_2nd = largest;
        largest=number;
      } else if(number>largest_2nd && largest_2nd != 0){
        largest_2nd = number;
      }

      ++counter;

    }

    printf("The largest number is %d \n", largest);
    printf("Second largest number is %d \n", largest_2nd);

    return 0;
}
