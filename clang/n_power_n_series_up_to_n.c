#include<stdio.h>

int main()
{
    int count, counter, series, product, series_counter;

    printf("Upto which number you want to print the power series: ");
    scanf("%i", &count);

    series = 1;
    printf("The power series upto %i is %i", count, series);

    counter = 1;

    while (series < count)
    {
        counter = counter + 1;
        product = 1;
        series_counter = 1;

        while (series_counter <= counter)
        {
            product = product * counter;
            series_counter = series_counter + 1;
        }

        series = product;

        if (series > count)
            break;

        printf(", %i", series);
    }

    printf(".\n");
    return 0;
}
