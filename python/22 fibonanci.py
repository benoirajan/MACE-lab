n=int(input('Enter the no. of terms: '))
f = 0
s = 1
print(f)
print(s)
i = 2
while(i<n):
    print(f+s)
    f, s = s, f+s
    i+=1


#output
"""
Enter the no. of terms: 6
0
1
1
2
3
5
"""
