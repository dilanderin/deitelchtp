#include <stdio.h>
#include <stdlib.h>

/*
Consider a program segment designed to find the first power of 3 larger than 100. Suppose the integer variable product has been initialized to 3.

Example 2
*/

int main()
{
    int product;
    product=3;

    while(product<=100){
        product= product*3;
    }

    printf("%d", product);

    return 0;
}
