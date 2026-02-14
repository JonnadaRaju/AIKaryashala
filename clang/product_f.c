#include<stdio.h>

void product(int num1, int num2, int num3)
{
	int result;
	result = num1 * num2 * num3;
	printf("The Product of %i, %i and %i is %i.\n", num1, num2, num3, result);
}
int main()
{
	int num =  5;
	product(num, num + 3, num * num);
	product(num%2, num/2, num*5);
	product(8, 9, num);

	return 0;
}