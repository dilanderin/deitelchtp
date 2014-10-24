#include <stdio.h>
#include <stdlib.h>

/*
Write a program that inputs three different integers from the keyboard, then prints the sum,
the average, the product, the smallest and the largest of these numbers. Use only the single-selection
form of the if statement you learned in this chapter.

Exercise 2_18
*/

int main()
{
    int x,y,z,largest,smallest;

    printf("Enter three integers: ");
    scanf("%d%d%d", &x, &y, &z);


    printf("The sum is %d\n", x+y+z);

    printf("The average is %d\n", (x+y+z)/3);

    printf("The product is %d\n", x*y*z);

    smallest = x;

    if(y<smallest){
      smallest=y;
    }

    if(z<smallest){
      smallest=z;
    }

    printf("Smallest is %d\n", smallest);

    largest = x;

    if(y>largest){
      largest=y;
    }

    if(z>largest){
      largest=z;
    }

    printf("Largest is %d\n", largest);

    return 0;
}
