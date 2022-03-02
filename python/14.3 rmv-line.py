try:
    line = int(input("Emter a line number: "))
    file = open('D:/test.txt','r+')
    lines = file.readlines()
    file.close()
    lines.pop(line-1)
    for i in lines:print(i,end='')
    file = open('D:/test.txt', 'w')
    file.writelines(lines)
except Exception(a):
    print(a)
finally:
    file.close()
    
"""
=================================================================================
remove line from file
=================================================================================
output:
=======
Emter a line number: 2
apple
orange
"""
