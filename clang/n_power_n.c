/* Algorithm: To multiply N N times, i.e N power N.
step-1: start
step-2: print "Enter the number you want to compute the power of itself: "
step-3: read Count
step-4: Counter = 1
step-5: Product = Count
step-6: print "The value of " + Count + " to the power of " + Count + " is "
step-7: if Counter < Count:
 	  Product = Count * Product
	  Counter = Counter + 1
          goto step-7
          print Product + ".\n"
step-8: stop */



#include<stdio.h>

int main() {
    int count, counter, product;

    printf("Enter the number you want to compute the power of itself: ");
    scanf("%i", &count);
    printf("The value of %i to the power of %i is ", count, count);
    counter = 1,product = count;
    while(counter < count) 
    {
        product = count * product;
        counter = counter + 1;
    }
    printf("%i.\n", product);

    return 0;
}
