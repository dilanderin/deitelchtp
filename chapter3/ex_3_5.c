#include <stdio.h>
#include <stdlib.h>

/*
a) Define variables sum and x to be of type int.
b) Set variable x to 1.
c) Set variable sum to 0.
d) Add variable x to variable sum and assign the result to variable sum.
e) Print "The sum is: " followed by the value of variable sum.


Combine these statements into a program that calculates the
sum of the integers from 1 to 10. Use the while statement to loop
through the calculation and increment statements.
The loop should terminate when the value of x becomes 11.

Exercise 3.5

*/

int main()
{
    unsigned int sum, x;

    sum=0;
    x=1;

    while(x<=10){
      sum = sum+x;
      x++;
    }

    printf("The sum of the integers from 1 to 10 is %u\n ", sum);

    return 0;
}
