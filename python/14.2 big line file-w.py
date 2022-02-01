file=False
try:
    file = open('D:/test.txt')
    lines = file.readlines()
    lines.sort(key=len)
    print('Bigger line:',lines[-1])
except Exception(a):
    print(a)
finally:
    if file:
        file.close()
    
"""
=================================================================================
big line  in file
=================================================================================
output:
=======
Bigger line: Mar Athanasius College of Engineering
"""
