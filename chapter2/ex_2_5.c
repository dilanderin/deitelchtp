#include <stdio.h>
#include <stdlib.h>

/*
Ask user for 3 integers and print the product of them.
Exercise 2.5
*/

int main()
{
    int x,y,z,result;

    printf("Enter three integers:");
    scanf("%d%d%d", &x, &y, &z);

    result = x*y*z;

    printf("The product is %d", result);
    return 0;
}
