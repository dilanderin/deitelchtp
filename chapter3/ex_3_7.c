#include <stdio.h>
#include <stdlib.h>

/*
a) Input unsigned integer variable x with scanf. Use the conversion specifier %u.
b) Input unsigned integer variable y with scanf. Use the conversion specifier %u.
c) Set unsigned integer variable i to 1.
d) Set unsigned integer variable power to 1.
e) Multiply unsigned integer variable power by x and assign the result to power.
f) Increment variable i by 1.
g) Test i to see if it’s less than or equal to y in the condition of a while statement.
h) Output unsigned integer variable power with printf. Use the conversion specifier %u.

Write a C program that uses this statements to calculate x raised to the y
power. The program should have a while repetition control statement.

Exercise 3.7

*/

int main()
{
    unsigned int x,y,i,power;

    printf("Enter the first integer:\n");
    scanf("%u", &x);

    printf("Enter the second integer:\n");
    scanf("%u", &y);

    i=1;
    power=1;

    while(i<=y){
    power=power*x;
    i++;
    }

    printf("%u raised to the %u power is %u", x, y, power);

    return 0;
}
