class Person:
    def __init__(self,name,roll):
        self.name=name
        self.roll=roll
    
class Mark:
    def __init__(self,math,comp):
        self.math=math
        self.comp=comp
        
class Student(Person,Mark):
    def __init__(self, name, roll, math, comp):
        Person.__init__(self,name,roll)
        Mark.__init__(self,math,comp)
        
    def getPecentage(self):
        t=self.math+self.comp
        t=t*100/200
        if t>50: return t 
        else: return 'Failed'
    
    
bib = Student(input('name: '),int(input('roll: ')),int(input('marks\n')),int(input()))
print(bib.getPecentage())

'''
name: Jijith
roll: 23
marks
34 
23
Failed
'''
