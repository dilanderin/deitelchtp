#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that demonstrates the difference
between predecrementing and postdecrementing using the decrement operator --

Exercise 3.21

*/

int main()
{
    int number;

    printf("Enter a number:\n");
    scanf("%d", &number);

    printf("The number is %d\n", number);
    printf("Predecrementing the number: %d\n", -- number);
    printf("Now the number is %d\n\n", number);

    printf("The number is %d\n", number);
    printf("Postdecrementing the number: %d\n", number--);
    printf("Now the number is %d\n\n", number);

    return 0;
}
