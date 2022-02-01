w = input("Enter a sentence: ")
a = w.find('not')
b = w.find('bad',a)

if b > -1:
    print(w.replace(w[a:b+3],'good'))
else:
    print('Pattern not find')

    
#output
"""
Enter a sentence: He is not very bad man
He is good man

Enter a sentence: He is bad but not so much
Pattern not find
"""
