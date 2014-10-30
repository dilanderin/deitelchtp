#include <stdio.h>
#include <stdlib.h>

/*
  Using only the techniques you learned in this chapter,
  write a program that calculates the squares and cubes of the numbers
  from 0 to 10 and uses tabs to print the following table of values:

  number square cube
  0       0      0
  1       1      1
  2       4      8
  3       9      27
  4       16     64
  5       25     125
  6       36     216
  7       49     343
  8       64     512
  9       81     729
  10      100    1000

Exercise 2.31

*/

int main()
{
    int count=0;

    printf("\nnumber\tsquare\tcube\n");
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;
    printf("%d\t%d\t%d\n", count, count*count, count*count*count);
    count=count+1;

    return 0;
}
