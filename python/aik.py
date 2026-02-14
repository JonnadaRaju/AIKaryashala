import sqlite3
db = sqlite3.connect("aik.db")
cursor = db.cursor()
cursor.execute("create table if not exists addition(id integer primary key, number_1, number_2, sum)")
number_entries = int(input("how many entries you want to sum: "))
for i in range(number_entries):
	id = int(input("enter the id: "))
	number_1 = int(input("enter the first number: "))
	number_2 = int(input("enter the second number: "))
	sum = number_1 + number_2
	cursor.execute("insert into addition values(?, ?, ?, ?)",(id, number_1, number_2, sum))
	if i < number_entries - 1:
		print("\n-------- next input-------\n")
	else:
	 	print("\n-------- End input---------\n")
db.commit()	
cursor.execute("select * from addition")
print(cursor.fetchall())
