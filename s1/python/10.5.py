def sum(n):
    if n==0:
        return 0
    return n%10+sum(n//10)

print(sum(int(input('Enter a number: '))))

"""
=========================================================================
Write a recursive function to find the sum of digits of a given number
=========================================================================
Output 
======
Enter a number: 555
15
"""
