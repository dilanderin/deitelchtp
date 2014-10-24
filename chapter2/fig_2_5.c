#include <stdio.h>
#include <stdlib.h>

/*

Obtain two integers typed by a user at the keyboard, computes the sum of these values and prints the result using printf.
Fig. 2.5

*/



int main(void)
{
    /* int integer1;
    int integer2;
    int sum; */

    int integer1, integer2, sum;

    printf("Enter first integer:\n");
    scanf("%d", &integer1);

    printf("Enter second integer:\n");
    scanf("%d", &integer2);

    sum= integer1 + integer2;

    printf("Sum is %d", sum);
    return 0;
}
