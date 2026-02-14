/* Algorithm To check Prime or Not.
step-1: start
step-2: print "Enter the number to check whether it is prime or not: "
step-3: read Number
step-4: NumberCounter = 0
step-5: Counter = 0
step-6: if (NumberCounter <= Number):
          NumberCounter = NumberCounter + 1
          if (Number % NumberCounter == 0):
            Counter = Counter + 1
          goto step-6
step-7: if (Counter == 2):
          print Number + " is a prime number.\n"
step-8: if (Counter != 2):
          print Number + " is not a prime number.\n"
step-9: stop */


#include<stdio.h>

int main()
{
	int number, counter, number_counter;

	printf("Enter the number to check whether it is prime or not: ");
	scanf("%i", &number);
	number_counter = 0, counter = 0;
	while(number_counter <= number)
	{
		number_counter = number_counter + 1;
		if(number % number_counter == 0)
		{
			counter = counter + 1;
		}
	}
	if(counter == 2)
	{
		printf("%i is a prime number.\n", number);
	}
	if(counter != 2)
	{
		printf("%i is not a prime number.\n", number);
	}

	return 0;
}