a = list(map(int,input('Enter the numbers: ').split()))
even=i=odd=0
while i<len(a):
    if not a[i]%2:
        even+=1
    else:
        odd+=1
    i+=1
print('Even',even,'Odd',odd)


"""
=====================================
count even and odd in a list
=====================================
| Output |
+========+
Enter the numbers: 1 2 3 4 5 6 7 8 9 
Even 4 Odd 5
"""
