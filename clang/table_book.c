/* Algorithm:  To print a table book.
step-2: Table1 = 1
step-3: Table2 = 2
step-4: Counter = 1
step-5: print "The multiplication tables of " + Table1 + " and " + Table2 + ":\n"
step-6: PageNumber = 1
step-7: if PageNumber <= 10:
          if Counter <= 10:
            Multiple1 = Table1 * Counter
            Multiple2 = Table2 * Counter
            print Table1 + " X " + Counter + " = " + Multiple1 + " | " + Table2 + " X " + Counter + " = " + Multiple2 + "\n"
            Counter = Counter + 1
            goto step-7
step-8: PageNumber = PageNumber + 1
step-9: Table1 = Table1 + 2
step-10: Table2 = Table2 + 2
step-11: if PageNumber <= 10:
           goto step-4
step-12: stop */

#include <stdio.h>

int main()
{
    int table_1, table_2, counter, page_number, multiple_1, multiple_2;

    page_number = 1, table_1 = 1, table_2 = 2;
    while (page_number <= 10)
    {
        printf("The multiplication tables of %i and %i:\n", table_1, table_2);
        counter = 1;
        while (counter <= 10)
        {
            multiple_1 = table_1 * counter;
            multiple_2 = table_2 * counter;
            printf("%2i X %2i = %3i\t|  %2i X %2i = %3i\n", table_1, counter, multiple_1, table_2, counter, multiple_2);
            counter = counter + 1;
        }
        page_number = page_number + 1;
        table_1 = table_1 + 2;
        table_2 = table_2 + 2;
    }

    return 0;
}
