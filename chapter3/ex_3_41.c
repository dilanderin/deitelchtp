#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that reads the radius of a circle (as a float value) and computes
and prints the diameter, the circumference and the area.
Use the value 3.14159 for ¹.

Exercise 3.41

*/

int main()
{
    float radius;

    printf("Enter te radius of the circle:\n");
    scanf("%f",&radius);

    printf("The diameter of the circle is %.2f\n", 2*radius);
    printf("The circumference of the circle is %.2f\n", 2*3.14159*radius);
    printf("The area of the circle is %.2f\n", 3.14159*radius*radius);
    return 0;
}
