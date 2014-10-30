#include <stdio.h>
#include <stdlib.h>

/*
Write a program that reads in two integers and determines and prints if the first is a multiple of the second.
[Hint: Use the remainder operator.]

Exercise 2.26

*/

int main()
{
  int num1, num2;

  printf("Enter two integers:\n");
  scanf("%d%d", &num1, &num2);

  if(num1%num2==0){
    printf("%d is a multiple of %d.\n", num1, num2);
  }

  if(num1%num2!=0){
    printf("%d is not a multiple of %d.\n", num1, num2);
  }

  return 0;
}
