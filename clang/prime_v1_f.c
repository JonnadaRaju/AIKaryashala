#include <stdio.h>

int isPrime(int number)
{
    int divisor, temp;

    if (number <= 1)
    {
        return 0; // not prime
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
            return 0; // not prime
        }

        divisor = divisor + 1;
    }

    return 1; // prime
}

int main()
{
    int number = 5;

    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}
