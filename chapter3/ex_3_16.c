#include <stdio.h>
#include <stdlib.h>

/*
Drivers are concerned with the mileage obtained by their automobiles.
One driver has kept track of several tankfuls of gasoline by recording miles driven
and gallons used for each tankful. Develop a program that will input the miles driven
and gallons used for each tankful. The program should calculate and display
the miles per gallon obtained for each tankful. After processing all input
information, the program should calculate and print the combined miles per
gallon obtained for all tankfuls. Here is a sample input/output dialog:

Enter the gallons used (-1 to end): 12.8
Enter the miles driven: 287
The miles/gallon for this tank was 22.421875

Enter the gallons used (-1 to end): 10.3
Enter the miles driven: 200
The miles/gallon for this tank was 19.417475

Enter the gallons used (-1 to end): 5
Enter the miles driven: 120
The miles/gallon for this tank was 24.000000

Enter the gallons used (-1 to end): -1

The overall average miles/gallon was 21.601423

Exercise 3.16

*/

int main()
{
    float miles_gallons, average, totalgallons, totalmiles, gallons, miles;

    totalgallons=0;
    totalgallons=0;

    printf("Enter the gallons used (-1 to end):\n");
    scanf("%f", &gallons);

    if(gallons==0){
        printf("No data entered");
        printf("Enter the gallons used (-1 to end):\n");
        scanf("%f", &gallons);
    }

    while(gallons!=-1){

      printf("Enter the miles driven: ");
      scanf("%f", &miles);

      miles_gallons= miles/gallons;

      printf("The miles/gallon for this tank was %f\n", miles_gallons);

      totalgallons += gallons;

      totalmiles += miles;

      printf("Enter the gallons used (-1 to end):\n");
      scanf("%f", &gallons);

    }


    average=  totalmiles/totalgallons;

    printf("The overall average miles/gallon was %f\n", average);

    return 0;
}
