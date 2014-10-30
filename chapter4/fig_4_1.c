#include <stdio.h>
#include <stdlib.h>

/*
Consider the simple program, which prints the numbers from 1 to 10.
 Counter-controlled repetition

Figure 4_1

*/

int main()
{
    unsigned int counter;

    counter=1;

    while(counter<=10){
      printf("%u\n", counter);
      counter++;
    }


/*  You can write it like this too:
    counter=0;
    while(++counter <= 10) {
        printf("%u\n", counter);
    }
*/
    return 0;
}
