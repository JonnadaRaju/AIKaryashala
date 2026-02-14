/*
step-1: start
step-2: print "To find maximum of three numbers.\n"
step-3: print "Enter the first number: "
step-4: read Number1
step-5: print "Enter the second number: "
step-6: read Number2
step-7: print "Enter the third number: "
step-8: read Number3
step-9: Greatest = Number1
step-10: if(Number2 > Greatest):
          Greatest = Number2
step-11: if(Number3 > Greatest):
           Greatest = Number3
step-12: print "The greatest of " + Number1 + ", " + Number2 + " and " + Number3 + " is " + Greatest + ".\n"
step-13: stop*/


#include<stdio.h>

int main()
{
  int number1, number2, number3, greatest;

  printf("To find maximum of three numbers.\n");
  printf("Enter the first number: ");
  scanf("%i", &number1);
  printf("Enter the second number: ");
  scanf("%i", &number2);
  printf("Enter the third number: ");
  scanf("%i", &number3);
  greatest = number1;
  if(number2 > greatest)
  {
    greatest = number2;
  }
  if(number3 > greatest)
  {
    greatest = number3;
  }
  printf("The greatest of %i, %i and %i is %i.\n", number1, number2, number3, greatest);

  return 0;
}