def fibo(n):
    if n==2:
        return 1
    if n==1:
        return 0
    return fibo(n-1)+fibo(n-2)

print(fibo(int(input('Enter a number: '))))

"""
=========================================================================
recursive function to find fibonanci n-th term
=========================================================================
Output 
======
Enter a number: 4
2
"""
