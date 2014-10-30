#include <stdio.h>
#include <stdlib.h>

/*
Consider the simple program, which prints the numbers from 1 to 10.
Counter-controlled repetition with the for statement.

Figure 4_2

*/

int main()
{
    unsigned int counter;

    for(counter=1; counter<=10; ++counter){
      printf("%u\n", counter);
    }

    return 0;
}
