// Algorithm: To print table of a given number.
// step-1: start
// step-2: print "Which multiplication table you want to print? "
// step-3: read Count
// step-4: Counter = 1
// step-5: print "The multiplication table of " + Count + " is \n"
// step-6: if Counter <= 10:
// 		      Multiple = Counter * Count
// 		      print Count + " X " + Counter + " = " + Multiple + "\n"
// 		      Counter = Counter + 1
// 		      goto step-6
// step-7: stop


#include<stdio.h>

int main()
{
	int count, counter, multiple;

	printf("Which multiplication table yoy want to print? ");
	scanf("%i", &count);
	printf("The multiplication table of %i is\n", count);
	counter = 1;
	while(counter <= 10)
	{
		multiple = counter * count;
		printf("%i X %i = %i\n", count, counter, multiple);
		counter = counter + 1;
	}

	return 0;
}