#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Using the continue statement in a for statement

1 2 3 4 6 7 8 9 10

Used continue to skip printing the value 5

Figure 4_12

*/

int main()
{
    unsigned int x;

    for(x=1; x<=10; ++x){
      if(x==5){
        continue;
      }

      printf("%u ", x);
    }

    printf("\nUsed continue to skip printing the value 5");

    return 0;
}
