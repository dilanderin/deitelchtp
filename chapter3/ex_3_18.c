#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
One large chemical company pays its salespeople on a commission basis.
The salespeople receive $200 per week plus 9% of their gross sales for that week.
For example, a salesperson who sells $5000 worth of chemicals in a week
receives $200 plus 9% of $5000, or a total of $650. Develop a program
that will input each salesperson’s gross sales for last week and will calculate
and display that salesperson’s earnings. Process one salesperson's figures
at a time. Here is a sample input/output dialog:

Enter sales in dollars (-1 to end): 5000.00
Salary is: $650.00
Enter sales in dollars (-1 to end): 1234.56
Salary is: $311.11
Enter sales in dollars (-1 to end): -1

Exercise 3_18

*/

int main()
{
    float sales;

    printf("Enter sales in dollars (-1 to end):\n");
    scanf("%f", &sales);


    while(sales!=-1){
      printf("Salary is $%.2f:\n\n", 200 + sales*0.09);
      printf("Enter sales in dollars (-1 to end):\n");
      scanf("%f", &sales);
    }

    return 0;
}
