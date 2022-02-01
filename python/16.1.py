class Time:
    def __init__(self,h,m,s):
        self.h=h
        self.m=m
        self.s=s
        
    def __add__(self,o):
        s=self.s+o.s
        m=self.m+o.m+(s//60)
        s=s%60
        h=self.h+o.h+(m//60)
        m=m%60
        return Time(h,m,s)
    def __str__(self):
        return str(self.h)+':'+str(self.m)+":"+str(self.s)
t = Time(6,4,50)
y = Time(0,0,11)
print(t+y)

'''
6:5:1
'''
