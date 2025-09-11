#include<stdio.h>

int main()
{
	int number, counter, number_counter;

	printf("Enter the number: ");
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
		printf("%i is prime number.\n", number);
	}
	if(counter != 2)
	{
		printf("%i is not prime number.\n", number);
	}

	return 0;
}