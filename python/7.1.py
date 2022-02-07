list = [10,10,20,30,40,20,10,20,30]
n = int(input("Enter the item: "))
c = list.count(n)
if c>0:
    print(n,'occured',c,'times')
else:
    print('not found');

"""
=========================================================================
Write a program to search an item in a given list and display
the number of occurrences of the given item. 
=========================================================================

Output 
======
Enter the item: 10
10 occured 3 times
"""
