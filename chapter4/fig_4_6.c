#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
A person invests $1000.00 in a savings account yielding 5% interest.
Assuming that all interest is left on deposit in the account, calculate and
print the amount of money in the account at the end of each year for 10 years.
Use the following formula for determining these amounts:
a = p(1 + r)^n
where
p is the original amount invested (i.e., the principal)
r is the annual interest rate
n is the number of years
a is the amount on deposit at the end of the nth year.

Figure 4_6

*/

int main()
{
    double amount;
    double principal= 1000.00;
    double rate = .05;
    unsigned int year;

    printf("Year\t\tAmount on Deposit\n");

    for(year=1; year<=10;++year){

      amount=principal*pow(1.0+rate, year);

      printf("%u\t\t%.2f\n", year, amount);

    }
    return 0;
}
