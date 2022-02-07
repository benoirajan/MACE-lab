a = lambda x,y: x if x>y else y
b = lambda x: not x%5
c = lambda x: len(x)>4
d = lambda x: x+x*.1 if x>1000 else x+x*.05

#function calling
print(a(10,30))
print(b(55))
print(list(filter(c,['a','ad','apple','orange'])))
print(list(map(d,[100,200,1000,2000,3000])))

"""
=========================================================================
Write lambda functions:
(a) To find largest of 2 numbers
(b)  To check the input number is divisible by 5
(c) To remove all strings with length < 5 from a list of strings
(d)  To increment a list of integers by 10% if the number is
greater than 1000 else by 5%.
=========================================================================

Output 
======
30
True
['apple', 'orange']
[105.0, 210.0, 1050.0, 2200.0, 3300.0]
"""
