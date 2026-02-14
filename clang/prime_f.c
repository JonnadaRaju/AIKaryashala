#include <stdio.h>

void isPrime(int number) 
{
    int divisor, temp;

    if (number <= 1) 
    {
        printf("%i is not prime.\n", number);
        return;
    }

    divisor = 2;

    while (divisor < number) 
    {
        temp = number;

        while (temp >= divisor) 
        {
            temp = temp - divisor;
        }

        if (temp == 0) 
        {
            printf("%i is not a prime.\n", number);
            return;
        }

        divisor = divisor + 1;
    }

    printf("%i is a prime.\n", number);
}

int main() 
{
    // int num = 8;
    int num;
    printf("Enter the number: ");
    scanf("%i", &num);
    isPrime(num);
    isPrime(2);
    isPrime(num + 3);
    isPrime(25);
    isPrime(289);
    isPrime(625);
    

    return 0;
}