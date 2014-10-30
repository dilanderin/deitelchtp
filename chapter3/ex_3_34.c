#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 A palindrome is a number or a text phrase that reads the same backward as forward.
 For example, each of the following five-digit integers is a palindrome:
 12321, 55555, 45554 and 11611. Write a program that reads in a five-digit
 integer and determines whether or not it’s a palindrome.
 [Hint: Use the division and remainder operators to separate
 the number into its individual digits.]

Exercise 3.34

*/

int main()
{
    int number;
    int first, second, third, fourth, fifth;

    printf("Enter a five-digit integer:\n");
    scanf("%d", &number);

    first = number/10000;
    second = (number%10000)/1000;
    third = (number%1000)/100;
    fourth = (number%100)/10;
    fifth = (number%10);

    if(first==fifth && second==fourth){
      printf("%d is a palindrome.\n", number);
    }else{
      printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
