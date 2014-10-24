#include <stdio.h>
#include <stdlib.h>

/*
Write a program that asks the user to enter two integers, obtains the numbers from the user,
then prints the larger number followed by the words Òis larger.Ó If the numbers are equal,
print the message ÒThese numbers are equal.Ó Use only the single-selection form
of the if statement you learned in this chapter.

Exercise 2_18
*/

int main()
{
    int x,y;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);

    if(x>y){
      printf("%d is larger.\n", x);
    }

    if(x<y){
      printf("%d is larger.\n", y);
    }

    if( x==y ){
        printf("These numbers are equal.\n");
    }
    return 0;
}
