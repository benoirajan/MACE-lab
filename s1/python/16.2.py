class Time:
    def __init__(self,h,m,s):
        self.h=h
        self.m=m
        self.s=s
        
    def __lt__(self,o):
        s=self.s-o.s
        +(self.m-o.m)*60
        +(self.h-o.h)*60**2
        return True if s<0 else False
    def __str__(self):
        return str(self.h)+':'+str(self.m)+":"+str(self.s)
t = Time(16,4,50)
y = Time(16,4,11)
print(y<t)

#True
