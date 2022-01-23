file = False
try:
    file = open('11.2.py', 'r')
    f = file.read().split()
    t = map(len,f)
    t = list(t)
    t = max(t)
    for i in f:
        if len(i)==t:
            print(i)
except Exception(a):
    print(a)
finally:
    if file:file.close()
    
"""
=================================================================================
seperate odd and even numbers in a files to 2 files
=================================================================================
output:
=======
file input: ['1', '2', '3', '4', '5', '6', '7', '8', '9']
"""
