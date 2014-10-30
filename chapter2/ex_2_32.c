#include <stdio.h>
#include <stdlib.h>

/*
The formulas for calculating BMI are
BMI = (weightInPounds × 703) / (heightInInches × heightInInches)
or
BMI = (weightInKilograms) / (heightInMeters × heightInMeters)

Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters),
then calculates and displays the user’s body mass index.
Also, the application should display the following information from the
Department of Health and Human Services/National Institutes of Health so the user can
evaluate his/her BMI:

BMI VALUES
Underweight: less than 18.5
Normal:      between 18.5 and 24.9
Overweight:  between 25 and 29.9
Obese:       30 or greater



Exercise 2.32

*/

int main()
{
    int weight;
    float height,BMI;

    printf("Enter your weight: (in kilograms)\n");
    scanf("%d", &weight);

    printf("Enter your height: (in meters)\n");
    scanf("%f", &height);

    BMI= weight/(height*height);

    printf("Your BMI is %.2f\n", BMI);

    puts("BMI VALUES");
    puts("Underweight:\tless than 18.5");
    puts("Normal:\t\tbetween 18.5 and 24.9");
    puts("Overweight:\tbetween 25 and 29.9");
    puts("Obese:\t\t30 or greater");
    return 0;
}
