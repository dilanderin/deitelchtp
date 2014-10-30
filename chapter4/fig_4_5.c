#include <stdio.h>
#include <stdlib.h>

/*
Write a program that uses the for statement to sum all the even integers from 2 to 100

Figure 4_5

*/

int main()
{
    unsigned int sum,number;

    sum=0;

    for(number=2; number<=100; number+=2){
      sum+=number;
    }

    /* You can write it like this too:

    for(number=2; number<=100; sum += number, number+=2); */

    printf("Sum is %u", sum);

    return 0;
}
