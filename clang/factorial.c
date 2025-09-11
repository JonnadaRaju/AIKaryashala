/* Algorithm: To compute the factorial of a given number.
step-1: start
step-2: print "Enter the number to find the factorial: "
step-3: read Count
step-4: Counter = 1
step-5: Factorial = 1
step-6: if Counter <= Count:
			Factorial = Factorial * Counter
			Counter = Counter + 1
			goto step-6
step-7: print "The factorial of " + Count + " is " + Factorial +".\n"
step-8: stop */

#include<stdio.h>

int main()
{
	int count, counter, factorial;

	printf("Enter the number to find the factorial: ");
	scanf("%i", &count);
	counter = 1, factorial = 1;
	while(counter <= count)
	{
		factorial = factorial * counter;
		counter = counter + 1;
	}
	printf("The factorial of %i is %i.\n", count, factorial);

	return 0;
}