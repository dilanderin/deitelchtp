#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that reads three nonzero integer values and determines and
prints whether they could represent the sides of a right triangle.

Exercise 3.44

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

    if(a*a == b*b + c*c){
      printf("They represent the sides of a right triangle.\n");
    }
    else if(b*b == a*a + c*c){
      printf("They represent the sides of a right triangle.\n");
    }
    else if(c*c==b*b + a*a){
      printf("They represent the sides of a right triangle.\n");
    }else{
      printf("They don't represent the sides of a right triangle.\n");
    }
    return 0;
}
