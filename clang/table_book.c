Algorithm:  To print a table book.
step-1: start
step-2: Table1 = 1
step-3: Table2 = 2
step-4: Counter = 1
step-5: print "The multiplication tables of " + Table1 + " and " + Table2 + ":\n"
step-6: PageNumber = 1
step-7: print "Page Number " + PageNumber +"\n"
step-8: if PageNumber <= 10:
			if Counter <= 10:
			   Multiple1 = Table1 * Counter
			   Multiple2 = Table2 * Counter
			   print Table1 + " X " + Counter + " = " + Multiple1 + " | " + Table2 + " X " + Counter + " = " + Multiple2 + "\n"
			   Counter = Counter + 1
			   goto step-8
step-9: PageNumber = PageNumber + 1
step-10: Table1 = Table1 + 2
step-11: Table2 = Table2 + 2
step-12: goto step-4
step-13: stop


