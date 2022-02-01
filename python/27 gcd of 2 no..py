import math
n,n1 = map(int,input('Enter 2 no.s to find gcd: ').split())
i=0
for i in range(min(n,n1)+1,1,-1):
    if not(n%i or n1%i):
        break
print(i)

#output
"""
Enter 2 no.s to find gcd: 60 48
12
"""
