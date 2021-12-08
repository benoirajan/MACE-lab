import re
password = input('Enter a password: ')
flag = -1
while True:  
    if (len(password)<6):
        break
    elif not re.search("[a-z]", password):
        break
    elif not re.search("[A-Z]", password):
        break
    elif not re.search("[0-9]", password):
        break
    elif not re.search("[_@$]", password):
        break
    elif re.search("\s", password):
        break
    else:
        flag = 0
        print("Valid Password")
        break
  
if flag ==-1:
    print("Not a Valid Password")


"""
=========================================================================
validate password
length min 6 max 16
start with char or number
should have
  atleast
     1 lowercase
     1 upper
       digit
       symbol
=========================================================================
Output 
======
Enter a password: ds3dfKJH@df
Valid Password
"""
