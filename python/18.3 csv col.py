import csv

csvreader = csv.reader(open('18.2 input.csv', 'r'))
#fields = next(csvreader)
n=int(input('Enter a col no.: '))
for row in csvreader:
    print(row[n-1])


'''
18.3 csv col.py
'''
#output
'''
Enter a col no.: 2
name
Job
Mark
Luke
'''
