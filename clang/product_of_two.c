/* Algorithm for multiplication of two numbers
step-1: start
step-2: print "The multiplication of three numbers."
step-3: print "Enter the first number: "
step-4: read Num1
step-5: print "Enter the second number: "
step-6: read Num1
step-7: print "Enter the third number: "
step-8: read Num3
step-9: Product = Num1 * Num2 * Num3
step-10: print "The product of " + Num1 + ", " + Num2 + " and " + " is " + Product + ".\n"
step-11: stop */



#include<stdio.h>

int main() 
{
	int num1, num2, num3, product;

	printf("The multiplication of three numbers.\n");
	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter the second number: ");
	scanf("%i", &num2);
	printf("Enter the third number: ");
	scanf("%i", &num3);
	product = num1 * num2 * num3;
	printf("The product of %i, %i and %i is %i.", num1, num2, num3, product);

	return 0;
}
