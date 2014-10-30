#include <stdio.h>
#include <stdlib.h>

/*
Write a program that reads an integer and determines and prints whether it is odd or even.
[Hint: Use the remainder operator. An even number is a multiple of two.
Any multiple of two leaves a remainder of zero when divided by 2.]

Exercise 2.24

*/

int main()
{
    int number;

    printf("Enter an integer:\n");
    scanf("%d", &number);

    if(number%2==0){
      printf("The integer is even.\n");
    }

    if(number%2!=0){
      printf("The integer is odd.\n");
    }

    return 0;
}
