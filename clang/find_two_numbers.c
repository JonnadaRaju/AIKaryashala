/* Algorithm to find two numbers using their sum and product. 
step-1: start
step-2: print "To find two numbers given their sum and product.\n"
step-3: print "Enter the sum of two numbers:"
step-4: read Sum
step-5: print "Enter the product of two numbers:"
step-6: read Product
step-7: Counter1 = 0
step-8: Counter2 = Sum
step-9:	if (Counter1 + Counter2) == Sum:
          Counter1 = Counter1 + 1
          Counter2 = Counter2 - 1
          if (Counter1 * Counter2) != Product:
            goto step-9
          print "The numbers are " + Counter1 + " and " + Counter2 + ".\n"
step-10: stop*/




#include<stdio.h>

int main()
{
	int sum, product, counter1, counter2;

	printf("To find two numbers given their sum and product.\n");
	printf("Enter the sum of two numbers: ");
	scanf("%i", & sum);
	printf("Enter the product of two numbers: ");
	scanf("%i", & product);
	counter1 = 0, counter2 = sum;
	while((counter1 + counter2) == sum)
	{
		counter1 = counter1 + 1;
		counter2 = counter2 - 1;
		if((counter1 * counter2) != product)
		{
			
		}
	}
		
}