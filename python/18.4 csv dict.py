'''
Write a Python program to write a Python dictionary to a csv file. After writing
the CSV file read the CSV file and display the content.
'''

import csv
header = ['id','name','age']
datas=[
    {'id':1,'name':'Job','age':34},
    {'id':2,'name':'Mark','age':32}
]
f=False
try:
    f = open('18.4 out.csv', 'w+')
    writer = csv.DictWriter(f,header)
    writer.writeheader()
    for row in datas:
        writer.writerow(row)
    f.close()
    f = open('18.4 out.csv', 'r')
    print(f.read())
except IOError as e:
    print(e)
finally:
    if f: f.close()
    
#output
'''
id,name,age
1,Job,34
2,Mark,32
'''
