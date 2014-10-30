#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Using the break statement in a for statement

1 2 3 4

Broke out of loop at x==5

Figure 4_11

*/

int main()
{
    unsigned int x;

    for(x=1; x<=10; ++x){
      if(x==5){
        break;
      }

      printf("%u ", x);
    }

    printf("\nBroke out of loop at x == %u\n", x);

    return 0;
}
