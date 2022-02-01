def bin(n):
    if n==1:
        return '1'
    return bin(n//2)+str(n%2)

print(bin(int(input('Enter a number: '))))

"""
=========================================================================
Write a recursive function to find the binary of decimal
=========================================================================
Output 
======
Enter a number: 8
1000
"""
