class Rectangle:
    def __init__(self,l,b):
        self.l=l
        self.b=b
        
    def area(self):
        return self.l*self.b
        
    def __lt__(self,o):
       print(self.area(),'<',o.area())
       return self.area()<o.area()

a=Rectangle(10,25)
b=Rectangle(15,20)
if   a<b:
    print('a<b')
else:
    print('not a<b')
"""
250 < 300
a<b
"""
