/*Algorithm : To print N multiples of 7
step-1: start
step-2: print "How many multiples of 7 you want to print? "
step-3: read Count
step-4: Counter = 1
step-5: print "The first " + Count + " multiples of 7 are " 
step-6: if Counter < Count:
			Multiple = Counter * 7
			print Multiple + ", "
			Counter = Counter + 1
			goto step-6
step-7: print (Counter * 7) + ".\n"
step-8: stop */



#include<stdio.h>

int main()
{
	int count, counter, multiple;

	printf("How many multiples of 7 you want to print? ");
	scanf("%i", &count);
	printf("The first %i multiples of 7 are ", count);
	counter = 1;
	while(counter < count)
	{		
		multiple = counter * 7;
		printf("%i, ", multiple);
		counter = counter + 1;
	}
	printf("%i.\n", counter * 7);

	return 0;
}