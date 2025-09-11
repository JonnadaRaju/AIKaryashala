/* Algorithm: Read two numbers and print as 200 is greater than 150.
step-1: start
step-2: print "To compare two numbers and print which is greater.\n"
step-3: print "Enter the first number: "
step-4: read Num1
step-5: print "Enter the second number: "
step-6: read Num2
step-7: if Num2 > Num1:
          Num1 = Num1 + Num2
          Num2 = Num1 - Num2
          Num1 = Num1 - Num2
step-8: print Num1 + " is greater than " + Num2 + ".\n"
step-9: stop */


#include<stdio.h>

int main()
{
    int number1, number2;

    printf("To compare two numbers and print which is greater.\n");
    printf("Enter the first number: ");
    scanf("%i", &number1);
    printf("Enter the second number: ");
    scanf("%i", &number2);
    if(number2 > number1)
    {
        number1 = number1 + number2;
        number2 = number1 - number2;
        number1 = number1 - number2;
    }
    printf("%i is greater than %i.\n", number1, number2);

    return 0;
}