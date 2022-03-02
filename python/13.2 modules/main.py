import operations

a = int(input("a="))
b = int(input("b="))

print('a+b=',operations.add(a,b))
print('a-b=',operations.sub(a,b))
print('a*b=',operations.mul(a,b))
print('a/b=',operations.div(a,b))

#question
'''
Create a module operations which has functions to add, subtract, multiply
and divide integers. Write a program that import operations and perform all
integer operations.
'''
#output
"""
a=10
b=5
a+b=15
a-b=5
a*b=50
a/b=2
"""

