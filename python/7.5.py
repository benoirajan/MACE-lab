words = input("Enter sentence: ").split()
c=0
for i in words:
    if len(i)>1 and i[0]==i[-1]:
        c+=1
print('c=',c)

"""
=========================================================================
Write a program that count the number of strings where string length
is 2 or more and the first and last characters are same.
=========================================================================

Output 
======
Enter sentence: I am david
c= 1
"""
