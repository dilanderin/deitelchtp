#include <stdio.h>
#include <stdlib.h>

/*
Write a program that reads in the radius of a circle and prints the circle’s diameter, circumference and area.
Use the constant value 3.14159 for π.
Perform each of these calculations inside the printf statement(s) and use the conversion specifier %f.

Exercise 2_20
*/

int main()
{
    int radius;

    printf("Enter the circle's radius: \n");
    scanf("%d", &radius);

    printf("The circle's diameter is %d\n", 2*radius);
    printf("The circle's circumference is %f\n", 2*3.14159*radius);
    printf("The circle's area is %f\n", 3.14159*radius*radius);

    return 0;
}
