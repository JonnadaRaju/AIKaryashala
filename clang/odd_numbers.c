/*Algorithm : To print odd numbers upto N.
step-1: start
step-2: print "Upto which number you want to print eodd numbers? "
step-3: read Count
step-4: Counter = 1
step-5: print "The odd numbers upto " + Count + " are "
step-6: if Counter < Count - 1:
			print Counter + ", "
			Counter = Counter + 2
			goto step-6
step-7: print Counter + ".\n"
step-8: stop */



#include<stdio.h>

int main()
{
	int count, odd_counter;

	printf("Upto which number you want to print odd numbers? ");
	scanf("%i", &count);
	printf("The odd numbers upto %i are ", count);
	odd_counter = 1;
	while(odd_counter < count - 1)
	{
		printf("%i, ", odd_counter);
		odd_counter = odd_counter + 2;
	}
	printf("%i.\n", odd_counter);

	return 0;
}