/* Algorithm: To compute and print sum of even numbers uptoN.
step-1: start
step-2: print "Upto which number you want to print the sum of even numbers: "
step-3: read Count
step-4: Sum = 0
step-5: Counter = 2
step-6: if Counter <= Count:
			Sum = Sum + Counter
			Counter = Counter + 2
			goto step-6
step-7: print "The sum of even numbers upto " + Count + " is " + Sum +".\n"
step-8: stop */



#include<stdio.h>

int main()
{
	int count, sum, counter;

	printf("Upto which number you want to print the sum of even numbers: ");
	scanf("%i", &count);
	sum = 0, counter = 2;
	while(counter <= count)
	{
		sum = sum + counter;
		counter = counter + 2;
	}
	printf("The sum of even numbers upto %i is %i.\n", count, sum);

	return 0;
}