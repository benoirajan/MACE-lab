def foo(a,b):
    return a==b,a+b==5,a-b==5
        
print(foo(
    int(input('Enter number: ')),
    int(input('Enter number: '))))


"""
=========================================================================
function to print a==b,a+b==5,a-b==5
=========================================================================
| Output |
+========+
Enter number: 5
Enter number: 0
(False, True, True)
"""
