#include <stdio.h>
#include <stdlib.h>

/*
Write a program that prints the numbers 1 to 4 on the same line.
Write the program using the following methods.
a) Using one printf statement with no conversion specifiers.
b) Using one printf statement with four conversion specifiers.
c) Using four printf statements.

Exercise 2_17
*/

int main()
{
    printf("1 2 3 4\n\n"); //part a

    printf("%d %d %d %d\n\n", 1, 2, 3, 4);  //part b

    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4 "); // part c
    return 0;
}
