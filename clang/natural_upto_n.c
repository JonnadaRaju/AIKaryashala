// step-1: start
// step-2: print "Upto which number you want to print natural numbers? "
// step-3: read Count
// step-4: Counter = 1
// step-5: If Counter <= Count:
//            Counter = Counter + 1
// 	          goto step-6
// step-10: print "The sum of first " + Count + " natural numbers is " + Sum + "."
// step-11: stop




#include<stdio.h>

int main()
{
	int count, counter;

	printf("Hoow many natural numbers you want to print? ");
	scanf("%i", &count);
	printf("The first %i natural numbers are ", count);
	counter = 1;
	while(counter < count)
	{
		printf("%i, ", counter);
		counter = counter + 1;
	}
	printf("%i.", counter);

	return 0;
}