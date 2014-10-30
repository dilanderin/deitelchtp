#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that reads three nonzero integer values and determines and
prints whether they could represent the sides of a triangle.

Exercise 3.43

*/

int main()
{

    unsigned int a,b,c;

    printf("Enter the first side:\n");
    scanf("%u", &a);

    printf("Enter the second side:\n");
    scanf("%u", &b);

    printf("Enter the third side:\n");
    scanf("%u", &c);

    if(abs(a-b)<c<abs(a+b) && abs(a-c)<b<abs(a+c) && abs(b-c)<a<abs(b+c)){
      printf("They represent the sides of a triangle.\n");
    }else{
      printf("They don't represent the sides of a triangle.\n");
    }
    return 0;
}
