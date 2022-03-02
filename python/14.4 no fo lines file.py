try:
    file = open(input('Enter a file name: '), 'r')
    print("Number of lines:",len(file.readlines()))
except Exception(a):
    print(a)
finally:
    file.close()
    
"""
=================================================================================
Print no of lines in a file
=================================================================================
output:
=======
Enter a file name: a.txt 
Number of lines: 5
"""
