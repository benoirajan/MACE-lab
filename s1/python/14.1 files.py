try:
    file = open('D:/test.txt')
    file2 =open('D:/test2.txt','w')
    file2.write(file.read())
    print("write is completed")
except Exception(a):
    print(a)
finally:
    file.close()
    file2.close()
    
"""
=================================================================================
file copy example
=================================================================================
output:
=======
write complete
"""
