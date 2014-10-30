#include <stdio.h>
#include <stdlib.h>

/*
Research several car-pooling websites. Create an application that calculates your
daily driving cost, so that you can estimate how much money could be saved by car pooling,
which also has other advantages such as reducing carbon emissions and
reducing traffic congestion. The application should input the following information and
display the user’s cost per day of driving to work:

a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.



Exercise 2.33

*/

int main()
{
    int miles, gasoline, mpg, parking, tolls, total;


    printf("\nEnter Total miles driven per day: \n");
    scanf("%d", &miles);
    printf("Enter Cost per gallon of gasoline: \n");
    scanf("%d", &gasoline);
    printf("Enter Average miles per gallon:\n");
    scanf("%d", &mpg);
    printf("Enter Parking fees per day:\n");
    scanf("%d", &parking);
    printf("Enter Tolls per day:\n");
    scanf("%d", &tolls);

    total = tolls + parking + ( miles / mpg ) * gasoline;

    printf("Your daily driving cost is $%d", total);
    return 0;
}
