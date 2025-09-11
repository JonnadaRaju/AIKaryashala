/* Algorithm: To print the series 1, 4, 9, ..... upto N.
step-1: start
step-2: print "Upto which number you want to print the series? "
step-3: read Count
step-4: Counter = 1
step-5: print "The series upto " + Count + " is " + Counter 
step-6: Counter = Counter + 1
step-7: Square = Counter * Counter
step-8: if Square <= Count :
			print ", " + Square
			goto step-6
step-9: print "."
step-10:stop */


#include<stdio.h>

int main()
{
	int count, counter, square;

	printf("Upto which number you want to print the sries? ");
	scanf("%i", &count);
	counter = 1;
	printf("The series upto %i is %i", count, counter);
	while(counter < 10)
	{	
		counter = counter + 1;
		square = counter * counter;
		if(square <= count)
		{
			printf(", %i", square);
		}
	}
	printf(".\n");
	
	return 0;
}