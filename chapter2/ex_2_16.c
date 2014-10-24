#include <stdio.h>
#include <stdlib.h>

/*
Write a program that asks the user to enter two numbers,
obtains the two numbers from the user and prints the sum, product, difference,
quotient and remainder of the two numbers.

Exercise 2_16
*/

int main()
{
    int x,y;

    printf("Enter two numbers");
    scanf("%d%d", &x, &y);

    printf("The sum is %d\n", x+y);
    printf("The product is %d\n", x*y);
    printf("The difference is %d\n", x-y);
    printf("The quotient is %d\n", x/y);
    printf("The remainder is %d\n", x%y);
    return 0;
}
