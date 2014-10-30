#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Using the do...while repetition statement

Figure 4_9

*/

int main()
{
    unsigned int counter=1;

    do{
    printf("%u  ", counter);
    }while(++counter<=10);

    return 0;
}
