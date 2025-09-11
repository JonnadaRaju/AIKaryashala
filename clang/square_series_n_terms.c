/* Algorithm: To print square series of N terms.
step-1: start
step-2: print "How many numbers of squares you want to print? "
step-3: read Count
step-4: Counter = 1
step-5: print "The first " + Count + " terms in the square series is "
step-6: if Counter < Count:
			Square = Counter * Counter
			print Square + ", "
			Counter = Counter + 1
			goto step-6
step-7: print (Counter * Counter) + ".\n"
step-8: stop */




#include<stdio.h>

int main()
{
	int count, counter, square;

	printf("How many numbers of squares you want to print? ");
	scanf("%i", &count);
	printf("The first %i terms in the square series is ", count);
	counter = 1;
	while(counter < count)
	{
		square = counter * counter;
		printf("%i, ", square);
		counter = counter + 1;
	}
	printf("%i.\n", counter*counter);

	return 0;	
}