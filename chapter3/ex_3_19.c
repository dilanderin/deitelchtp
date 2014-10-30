#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
The simple interest on a loan is calculated by the formula
interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate, and
therefore includes the division by 365 (days). Develop a program that will
input principal, rate and days for several loans, and will calculate and display
the simple interest for each loan, using the preceding formula.
Here is a sample input/output dialog:

Enter loan principal (-1 to end): 1000.00
Enter interest rate: .1
Enter term of the loan in days: 365
The interest charge is $100.00

Enter loan principal (-1 to end): 1000.00
Enter interest rate: .08375
Enter term of the loan in days: 224
The interest charge is $51.40

Enter loan principal (-1 to end): -1

Exercise 3_19

*/

int main()
{
    float principal, rate, days;

    printf("Enter loan principal (-1 to end):\n");
    scanf("%f", &principal);

    while(principal!=-1){

      printf("Enter interest rate:\n");
      scanf("%f",&rate);

      printf("Enter term of the loan in days:\n");
      scanf("%f",&days);

      printf("The interest charge is $%.2f\n\n", principal * rate * days / 365 );

      printf("Enter loan principal (-1 to end):\n");
      scanf("%f", &principal);

    }

    return 0;
}
