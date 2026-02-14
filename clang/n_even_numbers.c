/* Algorithm for N Even Numbers
step-1: start
step-2: print "How many even numbers you want to print? "
step-3: read Count
step-4: Counter = 1
step-5: EvenCounter = 0
step-6: print "The first " + Count + " even numbers are "
step-7: if Counter < Count:
          print EvenCounter + ", "
          Counter = Counter + 1
          EvenCounter = EvenCounter + 2
          goto step-7
step-8: print EvenCounter + ".\n"
step-9: stop */



#include<stdio.h>

int main()
{
	int count, counter, even_counter;

	printf("How many even numbers you want to print? ");
	scanf("%i", &count);
	printf("The first %i even numbers are ", count);
	counter = 1, even_counter = 0;
	while(counter < count)
	{
		printf("%i, ", even_counter);
		counter = counter + 1;
		even_counter = even_counter + 2;
	}
	printf("%i.\n", even_counter);

	return 0;
}
