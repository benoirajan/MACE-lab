def foo(a):
    if a[:2] != 'Is':
        print('Is',a)
    else:
        print(a)
        
foo(input('Enter sentence: '))


"""
=========================================================================
add Is to the start of word if not start with Is
=========================================================================
| Output |
+========+
Enter sentence: that true
Is that true
"""
