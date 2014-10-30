#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that displays the following checker-board pattern:

********
 ********
********
 ********
********
 ********
********
 ********

Your program must use only three output statements,
one of each of the following forms:

printf( "%s", "* " );
printf( "%s", " " );
puts( "" ); // outputs a newline

Exercise 3.39

*/

int main()
{
    int i=1,counter;

    while(i<=8){
      counter=1;

      if(i%2){

        while(counter<=8){
          printf( "%s", "* " );
          ++counter;
        }

        puts( "" );

      }else{

        while(counter<=8){
          printf( "%s", " *" );
          ++counter;
        }

        puts( "" );

      }
      ++i;
    }

    return 0;
}
