file = odd = even = False
try:
    file = open('oddeven.txt', 'r')
    odd = open('odd.txt', 'w')
    even = open('even.txt', 'w')
    t = file.read().split()
    print('file input:',t)
    for i in t:
        if not int(i)%2:
            even.writelines(i+'\n')
        else: odd.writelines(i+'\n')
except Exception(a):
    print(a)
finally:
    if file:file.close()
    if odd:odd.close()
    if even:even.close()
    
"""
=================================================================================
seperate odd and even numbers in a files to 2 files
=================================================================================
output:
=======
file input: ['1', '2', '3', '4', '5', '6', '7', '8', '9']
"""
