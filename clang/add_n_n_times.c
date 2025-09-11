/* Algorithm: To add a number itself repeatedly nuber times.
step-1: start
step-2: print "Enter the number you want to add itself repeatedly the number times: "
step-3: read Count
step-4: Counter = 1
step-5: Sum = 0
step-6: if Counter <= Count:
            Sum = Sum + Count
            Counter = Counter + 1
            goto step-6
step-7: print "The sum of " + Count + " added itself repeatedly " + Count + " times is " + Sum +".\n"
step-8: stop */

#include<stdio.h>

int main()
{
    int count, counter, sum;

    printf("Enter the number you want to add itself repeatedly the number times: ");
    scanf("%i", &count);
    sum = 0, counter = 1;
    while(counter <= count)
    {
        sum = sum + count;
        counter = counter + 1;
    }
    printf("The sum of %i added itself repeatedly %i times is %i.\n", count, count, sum);

    return 0;
}