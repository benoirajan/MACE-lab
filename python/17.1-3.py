class Person:
    def __init__(self,name,phno):
        self.name=name
        self.phno=phno
        
class Dept:
    def __init__(self,dname, loc):
        self.dname=dname
        self.loc=loc
    
class Emp(Person,Dept):
    def __init__(self,name, phno, dname, loc,designation,salary):
        Dept.__init__(self,dname,loc)
        Person.__init__(self,name,phno)
        self.designation=designation
        self.salary=salary
    def __eq__(self,o):
        return self.dname == o.dname
    def __ge__(self,o):
        return self.salary >= o.salary
      
p=Emp('Wesly','9046975624',"Design",'Kochi','Modeling',50000)
q=Emp('John', '9406937626',"Design",'Kochi','Manager',60000)
print(p == q)
print(p>=q)
'''
True
False
'''


