#include <stdio.h>
#include <stdlib.h>

/*
Display the following checkerboard pattern with eight printf statements and
then display the same pattern with as few printf statements as possible.

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

Exercise 2.27

*/

int main()
{
  puts( "With eight printf() statements:" );
  printf("* * * * * * * *\n");
  printf(" * * * * * * * * \n");
  printf("* * * * * * * *\n");
  printf(" * * * * * * * * \n");
  printf("* * * * * * * * \n");
  printf(" * * * * * * * * \n");
  printf("* * * * * * * * \n");
  printf(" * * * * * * * *\n\n");

  puts( "\nNow with one printf() statement:" );

  printf("* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n");

  return 0;
}
