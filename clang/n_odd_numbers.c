/* Algorithm for n Odd Numbers
step-1: start
step-2: print "To print n odd number.\n"
step-3: print "Enter the number upto which numnber you want: "
step-4: read Count
step-5: Num1 = 0
step-6: Counter = 1
step-7: if Num1 <= Count - 1:
	          print Counter + ", "
	          Counter = Counter + 2
	          Num1 = Num1 + 1
	          goto step-7
step-8: print Num1 + "."
step-9: stop */


#include<stdio.h>

int main()
{
	int count, number, counter;
	
	printf("How many odd numbers you want to print? ");
	scanf("%i", &count);
	printf("The first %i odd numbers are ", count);
	counter = 1, number = 0;
	while(number <= count-1)
	{
		printf("%i, ", counter);
	    counter = counter + 2;
	    number = number + 1;
	}
	printf("%i.\n", counter);

	return 0;
}