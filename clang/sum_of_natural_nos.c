/* Algorithm for sum of natural numbers
step-1: start
step-2: print "How many natural numbers you want to add? "
step-3: read Count
step-4: Sum = 0
step-5: Counter = 1
step-6: If Counter <= Count:
	       Sum = Sum + Counter
	       Counter = Counter + 1
	       goto step-6
step-7: print "The sum of first " + Count + " natural numbers is " + Sum + ".\n"
step-8: stop */





#include<stdio.h>

int main()
{
	int count, sum = 0, counter;

	printf("How many natural numbers you want to add? ");
	scanf("%i", &count);
	counter = 1;
	while(counter <= count)
	{
		sum = sum + counter;
		counter = counter + 1;
	}
	printf("The sum of first %i natural numbers is %i.\n", count, sum);

	return 0;
}