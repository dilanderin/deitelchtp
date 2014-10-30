#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Develop a program that will determine the gross pay for each of several employees.
The company pays �straight time� for the first 40 hours worked by each employee
and pays �time-and-a-half� for all hours worked in excess of 40 hours.
You�re given a list of the employees of the company, the number of hours each
employee worked last week and the hourly rate of each employee.
Your program should input this information for each employee and should determine
and display the employee's gross pay. Here is a sample input/output dialog:

Enter # of hours worked (-1 to end): 39
Enter hourly rate of the worker ($00.00): 10.00
Salary is $390.00

Enter # of hours worked (-1 to end): 40
Enter hourly rate of the worker ($00.00): 10.00
Salary is $400.00

Enter # of hours worked (-1 to end): 41
Enter hourly rate of the worker ($00.00): 10.00
Salary is $415.00

Enter # of hours worked (-1 to end): -1

Exercise 3.20

*/

int main()
{
    int hours;
    float rate, salary;

    printf("Enter # of hours worked (-1 to end):\n");
    scanf("%d", &hours);

    while(hours!=-1){

      printf("Enter hourly rate of the worker ($00.00):\n");
      scanf("%f",&rate);

      if(hours>=40){
        salary= hours*rate + (hours-40)*rate/2;
      } else{
        salary= hours*rate;
      }

      printf("Salary is $%.2f\n\n", salary);

      printf("Enter # of hours worked (-1 to end):\n");
      scanf("%d", &hours);

    }

    return 0;
}
