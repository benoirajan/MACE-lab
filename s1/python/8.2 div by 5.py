a = input('Enter binary: ').split()
l = []
for i in a:
    if not int(i,2)%5:
        l.append(i)
print(l)


"""
=====================================
print 4 digit binary is%5=0
=====================================
| Output |
+========+
Enter binary: 1000 1001 1010 1011 1100 1101 1110 1111
['1010', '1111']
"""
