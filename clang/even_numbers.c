// Algorithm : To print even natural numbers upto N.
// step-1: start
// step-2: print "Upto which number you want to print even natural numbers? "
// step-3: read Count
// step-4: Counter = 0
// step-5: print "The even numbers upto " + Count + " are "
// step-6: if Counter < Count - 1:
// 			print Counter + ", "
// 			Counter = Counter + 2
// 			goto step-6
// step-7: print Counter + ".\n"
// step-8: stop



#include<stdio.h>

int main()
{
	int count, counter;

	printf("Upto which number you want to print even numbers? ");
	scanf("%i", &count);
	printf("The even numbers upto %i are ", count);
	counter = 0;
	while(counter < count - 1)
	{
		printf("%i, ", counter);
		counter = counter + 2;
	}
	printf("%i.\n", counter);

	return 0;
}