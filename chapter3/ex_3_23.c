#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
The process of finding the largest number (i.e., the maximum of a group of numbers)
is used frequently in computer applications. For example, a program that determines
the winner of a sales contest would input the number of units sold by each salesperson.
The salesperson who sells the most units wins the contest. Write a pseudocode program
and then a program that inputs a series of 10 non-negative numbers and determines and
prints the largest of the numbers.
Hint: Your program should use three variables as follows:

counter:A counter to count to 10 (i.e., to keep track of how many numbers
have been input and to determine when all 10 numbers have been processed)

number:The current number input to the program

largest:The largest number found so far


Exercise 3.23

*/

int main()
{
    int counter, largest;
    unsigned int number;

    counter=1;

    largest=0;

    while(counter<=10){

      printf("Enter the number:\n");
      scanf("%u", &number);

      if(number>largest){
        largest=number;
      }

      ++counter;
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
