def foo(a,b=2):
    i=0
    l=[]
    while i < int(b):
        l.append(a)
        i+=1
    return l
        
print(foo(
    input('Enter word: '),
    input('Enter the count: ')))


"""
=========================================================================
copy(a,3):[a,a,a]
=========================================================================
| Output |
+========+
Enter word: go
Enter the count: 6
['go', 'go', 'go', 'go', 'go', 'go']
"""
