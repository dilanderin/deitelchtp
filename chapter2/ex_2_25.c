#include <stdio.h>
#include <stdlib.h>

/*
Print your initials in block letters down the page.
Construct each block letter out of the letter it represents as shown below.

PPPPPPPPP
    P   P
    P   P
    P   P
     P P

  JJ
 J
J
 J
  JJJJJJJ

DDDDDDDDD
D       D
D       D
 D     D
  DDDDD

Exercise 2.25

*/

int main()
{
    puts("PPPPPPPPP");
    puts("    P   P ");
    puts("    P   P ");
    puts("    P   P");
    puts("     P P\n");

    puts("  JJ ");
    puts(" J");
    puts("J ");
    puts(" J");
    puts("  JJJJJJJ\n");

    puts("DDDDDDDDD");
    puts("D       D");
    puts("D       D ");
    puts(" D     D");
    puts("  DDDDD\n");
    return 0;
}
