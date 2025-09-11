/* Algorithm: Read two numbers and print as 200 is greater than 150.
step-1: start
step-2: print "To compare two numbers and print which is greater.\n"
step-3: print "Enter the first number: "
step-4: read Num1
step-5: print "Enter the second number: "
step-6: read Num2
step-7: Greater = " is greater than "
step-8: if Num1 > Num2:
			print Num1 + Greater + Num2 + ".\n"
			goto step-10
step-9: print Num2 + Greater + Num1 + ".\n"
step-10: stop */



#include<stdio.h>

int main()
{
    int number1, number2;
    
    printf("To compare two numbers and print which is greater.\n");
    printf("Enter the first number: ");
    scanf("%i", &number1);
    printf("Enter the second number: ");
    scanf("%i", &number2);
    char greater[] = " is greater than ";
    while(number1 > number2)
    {
    	printf("%i%s%i.\n", number1, greater, number2);
    	break;
    }
    printf("%i%s%i.\n", number2, greater, number1);

    return 0;
}