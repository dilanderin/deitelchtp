#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Counting letter grades with switch

Figure 4_7

*/

int main()
{
    int grade;
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades:");
    puts("Enter the EOF character to end input:");

    while( (grade = getchar()) != -1 ){
      switch(grade) {

        case 'A':
        case 'a':
        ++aCount;
        break;

        case 'B':
        case 'b':
        ++bCount;
        break;

        case 'C':
        case 'c':
        ++cCount;
        break;

        case 'D':
        case 'd':
        ++dCount;
        break;

        case 'F':
        case 'f':
        ++fCount;
        break;

        case '\n':
        case '\t':
        case ' ':
        break;

        default:
        printf("Incorrect letter grade entered.");
        puts("Enter a new grade.");
        break;
      }
    }

    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount );
    printf("B: %u\n", bCount );
    printf("C: %u\n", cCount );
    printf("D: %u\n", dCount );
    printf("F: %u\n", fCount );

    return 0;
}
