def rev(s):
    if not len(s):
        return ''
    return s[-1]+rev(s[:-1])
print(rev(input('Enter a string: ')))

"""
=========================================================================
Write a recursive function to find the reverse of n striing
=========================================================================
Output 
======
Enter a string: mot
tom
"""
