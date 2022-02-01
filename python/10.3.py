def fact(n):
    if n == 1:
        return 1;
    return n*fact(n-1)

#function calling
print(fact(int(input("Enter a number: "))))

"""
=========================================================================
Write a recursive function to find factorial of a number.
=========================================================================

Output 
======
Enter a number: 5
120
"""
