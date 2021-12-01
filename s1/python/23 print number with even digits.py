import math
l,h = map(int, input('Enter the higher and lower limit: ').split())
for i in range(l,h):
    t = True
    for j in str(i):
        t = t and not(int(j)%2)
    if t:
        sr = math.sqrt(i)
        if not (sr-math.floor(sr)):
            print(i)
        


#output
"""
Enter the higher and lower limit: 4000 9999
4624
6084
6400
8464
"""
