import csv

csvreader = csv.reader(open('18.2 input.csv', 'r'))
#fields = next(csvreader)

for row in csvreader:
    print(row)

#output
#------
#['id', 'name', 'age']
#['1', 'Job', '34']
#['2', 'Mark', '32']
#['3', 'Luke', '23']
