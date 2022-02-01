class Rect:
    def __init__(self,l,b):
        self.l=l
        self.b=b
        
class Cuboid(Rect):
    def __init__(self,l, b, d):
        Rect.__init__(self,l,b)
        self.d=d
        
    def getVol(self):
        return self.l,self.b,self.d
    
    def __le__(self,o):
        return self.getVol()<=o.getVol()
        
x=Cuboid(2,2,4)
y=Cuboid(2,3,3)
print(x<=y)

'''
True
'''
