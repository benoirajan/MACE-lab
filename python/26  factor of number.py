n = int(input('Enter a number to find factors: '))
for i in range(1,n+1):
    if not n%i:
        print(i)

#output
"""
Enter a number to find factors: 10
1
2
5
10
"""
