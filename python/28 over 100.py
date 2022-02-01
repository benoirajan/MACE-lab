#a = list(map(lambda x: 'Over' if int(x)>100 else x ,
#             input('Enter no. of integers: ').split()))

a = list(map(int, input('Enter no. of integers: ').split()))
for i in range(0,len(a)):
    a[i] = 'Over' if a[i]>100 else a[i]
print(a)

#output
"""
Enter no. of integers: 100 100 201 23 54 12 45 2
[100, 100, 'Over', 23, 54, 12, 45, 2]
"""
