#include <stdio.h>
#include <stdlib.h>

/*
Using if statements to compare two numbers entered by the user.
Figure 2.13
*/

int main()
{
    int num1, num2;

    printf("Enter two integer and I'll tell you their relationships");
    scanf("%d%d", &num1, &num2);

    if (num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);
    }

    if (num1 != num2) {
        printf("%d is not equal to %d\n", num1, num2);
    }

    if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    }

    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    }

    if (num1 <= num2) {
        printf("%d is less than or equal to %d\n", num1, num2);
    }

    if (num1 >= num2) {
        printf("%d is greater than or equal to %d\n", num1, num2);
    }

    printf("Welcome ");

    printf("%s", "Welcome ");

    return 0;
}
