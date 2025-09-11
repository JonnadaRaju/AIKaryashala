Algorithm: To multiply N N times, i.e N power N.
step-1: start
step-2: print "Enter the number you want to compute the power of itself: "
step-3: read Count
step-4: Counter = 1
step-5: Product = Count
step-6: print "The value of " + Count + " to the power of " + Count + " is "
step-7: if Counter < Count :
			Product = Count * Product
			Counter = Counter + 1
			goto step-7:
step-8: print Product + ".\n"
step-9: stop