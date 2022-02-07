import re

file = False
try:
    file = open('18.1 input.txt', 'r')
    ls = file.readlines()
    for s in ls:
        #a
        if re.search("explain",s):
            print(s)
        #b date
        elif re.search('(\d{1,2}[-,/]){2}\d{2,4}',s):
            print(s)
        #c more than 8 or 8 word
        elif re.search('\w{8,}',s):
            print(s)
        #d mobile
        elif re.search('\d{10}',s):
            print(s)
except Exception(a):
    print(a)
finally:
    if file:file.close()
    

#output
'''
Science can't explain everything

DOB: 20-10-1961

For answers, check the following sources:

     1.Get I Don’t Have Enough Faith to Be an Atheist’ & other apologetics resources at http://impactapologetics.com/

     2.Visit our blog (https://crossexamined.org/blog) where you can read more about particular topics.

     4.Call us at 7045941207 to leave a message. Please include your Name, Email, and Phone number twice in your message and we’ll contact you back ASAP. We will not answer theological questions left via voicemail.
'''
