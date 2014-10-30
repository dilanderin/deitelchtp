#include <stdio.h>
#include <stdlib.h>

/*
Write a program that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from one another by three spaces each.
[Hint: Use combinations of integer division and the remainder operation.]
For example, if the user types in 42139, the program should print.

4 2 1 3 9

Exercise 2.30

*/

int main()
{
    int number;

    printf("Enter a five-digit number:");
    scanf("%d", &number);

    printf("%d   ", number/10000);
    printf("%d   ", number%10000/1000);
    printf("%d   ", number%1000/100);
    printf("%d   ", number%100/10);
    printf("%d   ", number%10);
    return 0;
}
