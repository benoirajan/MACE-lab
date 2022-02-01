def sum(n):
    if n==0:
        return 0
    return n+sum(n-1)

print(sum(int(input('Enter a number: '))))

"""
=========================================================================
Write a recursive function to find the sum of n whole no.s
=========================================================================
Output 
======
Enter a number: 3
6
"""
