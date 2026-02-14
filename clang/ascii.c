#include <stdio.h>

int main()
{
    int decimalNumber = 32;

    printf("          ASCII CHART\n");
    printf("-----------------------------------\n");
    printf("Decimal Number\t|  ASCII Character\n");
    printf("-----------------------------------\n");
    while(decimalNumber <= 126)
    {
    	printf("%8i\t|\t%c          |\n", decimalNumber, decimalNumber);
    	decimalNumber = decimalNumber + 1;
    }
    
   return 0;
}