/* Algorithm for Addition of two numbers
step-1: start
step-2: print "The addition of two numbers."
step-3: print "Enter the first number: "
step-4: read Num1
step-5: print "Enter the second number: "
step-6: read Num2
step-7: Sum = Num1 + Num2
step-8: print "The addition of " + Num1 + " and " + Num2 + " is " + Sum + "."
step-9: stop */


#include<stdio.h>

int main()
{
	int num1, num2,sum;

	printf("The addition of two numbers.\n");
	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter the second number: ");
	scanf("%i", &num2);
	sum = num1 + num2;
	printf("The sum of %i and %i is %i.\n", num1, num2, sum);

	return 0;
}